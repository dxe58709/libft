/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:01:01 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 12:19:32 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	size_t	i;
	size_t	j;

	i = 0;
	while (i < s1_len)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}

// #include "stdio.h"

// int	main()
// {
// 	char const	*s1 = "abcde";
// 	char const	*s2 = "123456789";

// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:01:37 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/31 17:28:27 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;
	size_t	start;
	size_t	end;

	start = 0; //s1の先頭
	end = ft_strlen(s1) - 1; //末尾のヌル文字を除く
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = end - start + 1;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1 + start, len);
	new[len] = '\0';
	return (new);
}

// #include <stdio.h>

// int	main()
// {
// 	char const	*s1 = "123412hello12344432";
// 	char const	*set = "1234";

// 	printf("%s\n", ft_strtrim(s1,set));
// }

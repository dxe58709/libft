/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:24:36 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/01 19:19:18 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}
void	*free_split(int i, char **new)
{
	i = 0;
	 while (new[i])
	{
    	free(new[i]);
    	i++;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		count;
	size_t	i;
	size_t	j;
	size_t	start;

	count = ft_count(s, c);
	new = (char **)malloc((count + 1) * sizeof(char *));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			start = i;
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			new[j] = (char *)malloc((i - start + 2) * sizeof(char));
			if (new[j] == NULL)
				return (free_split(i, new));
			ft_strlcpy(new[j], s + start, i - start + 2);
			j++;
		}
		i++;
	}
	new[j] = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main()
{
	const char	*new = "ibAAbbBBbbCC";
	char	c = 'b';

	printf("%s\n", ft_split(new, c)[3]);
}*/

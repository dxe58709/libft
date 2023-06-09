/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:24:36 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/09 16:13:57 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
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

static void	*free_split(int i, char **new)
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

static void	creat_split(char **new, char const *s, char c, size_t *j)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			start = i;
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			new[*j] = (char *)malloc((i - start + 2) * sizeof(char));
			if (new[*j] == NULL)
			{
				free_split(*j, new);
				return ;
			}
			ft_strlcpy(new[*j], s + start, i - start + 2);
			(*j)++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		count;
	size_t	j;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	new = (char **)malloc((count + 1) * sizeof(char *));
	if (new == NULL)
		return (NULL);
	j = 0;
	creat_split(new, s, c, &j);
	new[j] = NULL;
	return (new);
}

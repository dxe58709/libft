/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:24:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/19 16:11:08 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	if (size == i)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
			j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
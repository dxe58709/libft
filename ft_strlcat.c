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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	if (dstsize == i)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
			j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}


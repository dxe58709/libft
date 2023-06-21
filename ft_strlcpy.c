/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:18:19 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 12:14:21 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>

int	main()
{
	const char	*src = "12345";
	char	dst[10];

	size_t	bytes_copied = ft_strlcpy(dst, src, sizeof(dst) / sizeof(dst[0]));
	ft_strlcpy(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu\n", bytes_copied);

	strlcpy(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu\n", bytes_copied);

	return (0);
}
*/

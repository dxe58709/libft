/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:24 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/28 17:40:29 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d == s)
		return (d);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
/*
#include <stdio.h>

int	main()
{
	char dst1[10] = "1234";
    char src1[10] = "56789";
    printf("%s\n", (char*)memmove(dst1, src1, 9));
    
    char dst2[10] = "1234";
    char src2[10] = "56789";
    printf("%s\n", (char*)ft_memmove(dst2, src2, 9));
    
    char dst3[10] = "12345678";
    char src3[10] = "abc";
    printf("%s\n", (char*)memmove(dst3, src3, 10));
    
    char dst4[10] = "12345678";
    char src4[10] = "abc";
    printf("%s\n", (char*)ft_memmove(dst4, src4, 10));
    
    char dst5[10] = "1234";
    char src5[10] = "5678";
    printf("%s\n", (char*)memmove(dst5, src5, 8));
    
    char dst6[10] = "1234";
    char src6[10] = "5678";
    printf("%s\n", (char*)ft_memmove(dst6, src6, 8));
}*/

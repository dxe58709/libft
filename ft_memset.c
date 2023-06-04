/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:28 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 12:07:19 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	unsigned char	byte_value;
	size_t			i;

	p = buf;
	byte_value = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		p[i] = byte_value;
			i++;
	}
	return (buf);
}

// #include        <stdio.h>
// #include        <string.h>

// int main(void)
// {
//         char str[] = "0123456789";
        
//         memset(str+2, '*', 5);
        
//         printf("%s\n",str);

//         return 0;
// }
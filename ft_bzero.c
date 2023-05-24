/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:53:55 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/22 17:56:30 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>

// int main() {
//     char str[] = "Hello, world!";
//     size_t size = sizeof(str) - 1;  // 文字列のサイズ（終端のヌル文字を除く）

//     printf("Before ft_bzero: %s\n", str);

//     ft_bzero(str, size);

//     printf("After ft_bzero: %s\n", str);

//     return 0;
// }
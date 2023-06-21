/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:54:46 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/22 16:58:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	c;

// 	c = ft_toupper('K');
// 	printf("%c\n", c);
// 	return (0);
// }

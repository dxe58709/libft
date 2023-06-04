/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:54:24 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 12:12:29 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main()
{
	char *str = "libft-42tokyo";
	printf("%d\n", strncmp(str,"libft", 5));
	printf("%d\n", ft_strncmp(str,"libft", 5));

	printf("%d\n", strncmp(str,"i", 5));
	printf("%d\n", ft_strncmp(str,"i", 5));

	printf("%d\n", strncmp(str,"libft-42tokyoi", 15));
	printf("%d\n", ft_strncmp(str,"libft-42tokyoi", 15));

}
*/

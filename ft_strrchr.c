/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:54:26 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/27 15:10:46 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*memory;

	chr = (char)c;
	memory = NULL;
	while (*s != '\0')
	{
		if (*s == chr)
			memory = (char *)s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (memory);
}
/*
#include <stdio.h>

int	main()
{
	const char	*s = "libft-tokyo";
	int	c;

	printf("%s\n", strrchr(s, 'o'));
	printf("%s\n", ft_strrchr(s, 'o'));

	printf("%s\n", strrchr(s, '!'));
	printf("%s\n", ft_strrchr(s, '!'));

	printf("%s\n", strrchr(s, 't'));
	printf("%s\n", ft_strrchr(s, 't'));
}*/

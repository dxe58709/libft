/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:31 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/24 15:01:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	if (ft_isascii(chr) == 0 )
		return ((char *)s);
	while (*s != '\0' || chr == '\0')
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main ()
{
	char *s = "libft-test-tokyo";
	int c = 'i' + 256;
	printf ("%d\n", (char)c);
	printf ("%d\n", 'i');
	printf ("%d\n", c);
	printf ("%s\n",strchr(s, c));
	printf ("%s\n",ft_strchr(s, c));
}*/

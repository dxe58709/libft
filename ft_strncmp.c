/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:54:24 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/26 10:26:13 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (i == n)
		return (0);
	while (*s1 == *s2 && i < n)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

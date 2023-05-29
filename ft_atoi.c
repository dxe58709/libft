/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:53:50 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/29 16:24:44 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		count;

	i = 0;
	nb = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (ft_isdigit(str[i + 1]) == 0)
			return (0);
		else if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (count == 1 && ((nb > LONG_MAX / 10) ||
				((nb == LONG_MAX / 10) && (str[i] - '0') > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		else if (count == -1 && ((-nb < LONG_MIN / 10) ||
					((-nb == LONG_MIN / 10) && -(str[i] - '0') < LONG_MIN % 10)))
			return ((int)LONG_MIN);
		nb = nb * 10 + (str[i] - '0');

		i++;
	}
	return (nb * count);
}
/*
#include <libc.h>

int main()
{
	int ex = atoi("-9223372036854775809");
	int ac = ft_atoi(")922337203685477580v8";

	printf("ex: %d\n", ex);
	printf("ac: %d\n", ac);
}*/

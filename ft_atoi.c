/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:53:50 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/24 15:31:08 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libht.h"

int ft_to..();

// int	ft_atoi(char *str)
// {
// 	int	i;
// 	int	nb;
// 	int	count;

// 	i = 0;
// 	nb = 0;
// 	count = 1;
// 	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
// 		|| str[i] == '\r' || str[i] == ' ')
// 	{
// 		i++;
// 	}
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 		{
// 			count *= -1;
// 		}
// 		i++;
// 	}
// 	nb = ft_to_number(str, i);
// 	return (nb * count);
// }

// int	ft_to_number(char *str, int i)
// {
// 	int	nb;

// 	nb = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		nb = nb * 10 + str[i] - '0';
// 		i++;
// 	}
// 	return (nb);
// }

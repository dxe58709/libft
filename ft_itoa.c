/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:29:12 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/01 19:35:08 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num(int n)
{
	int	len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	int				count;
	unsigned int	nb;
	char			*new;

	len = get_num(n);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[len] = '\0';
	if (n < 0)
	{
		count = -1;
		nb = -n;
	}
	else
	{
		count = 1;
		nb = n;
	}
	if (count == -1)
		new[0] = '-';
	while (len--)
	{
		new[len + (count == -1)] = nb % 10 + '0';
		nb /= 10;
	}
	return (new);
}

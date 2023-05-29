/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:02:49 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/29 19:01:08 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	
	if (count == 0 || size == 0)
	{
		new = (void *)malloc(1);
		ft_bzero(new, 1);
		return (new);
	}
	if (size >= SIZE_MAX / count)
		return (0);
	new = (void *)malloc(count * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, (count * size));
	return (new);
}

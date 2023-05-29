/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:32:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/29 18:25:22 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char	*new;
    size_t	len;

	len = ft_strlen(s1);
    new = (char *)malloc((len + 1) * sizeof(char));
    if (new == NULL)
        return (NULL);
    ft_memcpy(new, s1, len);
	new[len + 1] = '\0';
	return (new);
}

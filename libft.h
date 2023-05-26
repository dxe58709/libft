/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:54:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/05/26 10:26:39 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

 int		ft_isalpha(int c);
 int		ft_isascii(int c);
 int		ft_isdigit(int c);
 int		ft_isprint(int c);
 int		ft_isalnum(int c);
size_t		ft_strlen(const char *str);
 int		ft_tolower(int c);
 int		ft_toupper(int c);
 void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *buf, int ch, size_t n);
//int		atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strchr(const char *s, int c);
//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//char	*ft_strrchr(const char *s, int c);
//void	*ft_calloc(size_t count, size_t size);
//char	*ft_strdup(const char *s1);

#endif

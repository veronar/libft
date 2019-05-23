/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:10 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/23 09:06:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int 	ft_isalpha(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_isascii(int c);
char 	*ft_strcpy(char *dst, const char *src);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const void *s1, const void *s2);
char	*ft_strdup(const char*s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strnlen(const char *s, size_t maxlen);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


#endif
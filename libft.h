/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:10 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 09:45:52 by vesingh          ###   ########.fr       */
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
int		ft_atoi(char *str);
int		ft_isascii(int c);
char 	*ft_strcpy(char *dst, const char *src);


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:29:25 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/23 10:27:56 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
//	int 	i;
	int		slen;
	char	chr;

	slen = (int)ft_strlen(s);
//	i = 0;
	chr = (char)c;
	while(slen >= 0)
	{
		if(s[slen] == chr)
			return ((char*)s + slen);
		slen--;
	}
	return (NULL);	
}

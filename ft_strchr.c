/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:29:25 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/23 10:03:04 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int 	i;
	char	chr;

	i = 0;
	chr = (char)c;
	while(s[i] != '\0')
	{
		if(s[i] == chr)
			return ((char*)s+i);
		i++;
	}
	return (NULL);	
}

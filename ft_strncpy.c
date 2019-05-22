/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:53:49 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/22 12:29:03 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if(src[i] == '\0')
		{
			while(i < len)
			{
				dst[i] = '\0';
				i++;
			}
		}
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	char *source;
	char *dest;

	source = av[2];
	dest = av[1];
	if (ac != 3)
		return (0);
	else 
	{
		printf("*src = %s", source);
		printf("*dst = %s", dest);
		ft_strcpy(dest, source);
		printf("*src = %s", source);
		printf("*dst = %s", dest);
	}
	return (0);
}
*/

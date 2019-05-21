/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:53:49 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 09:53:07 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	int i;
	char *res = 0;

	*res = *dst;
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i + 1] = '\0';
	return (res);
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

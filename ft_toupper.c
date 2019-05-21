/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:53:09 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 09:53:49 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}


/*
#include <ctype.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (ac != 2)
		return 0;
	else if (av[1][1] != '\0')
		return 0;
	else 
	{
		a = ft_toupper(av[1][0]);
		printf("ft_toupper: %d", a);
		printf("\n");
		b = toupper(av[1][0]);
		printf("toupper: %d", b);
		printf("\n");
	}
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:21:23 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 09:55:14 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
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
		a = ft_isdigit(av[1][0]);
		printf("ft_isdigit: %d", a);
		printf("\n");
		b = isdigit(av[1][0]);
		printf("isdigit: %d", b);
		printf("\n");
	}
	return 0;
}*/

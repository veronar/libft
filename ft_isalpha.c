/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:53:09 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/20 11:15:56 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdlib.h>
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
		a = ft_isalpha(av[1][0]);
		printf("ft_isalpha: %d", a);
		printf("\n");
		b = isalpha(av[1][0]);
		printf("isalpha: %d", b);
		printf("\n");
	}
	return 0;
}*/

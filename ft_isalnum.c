/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:31:20 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 09:54:52 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	else 
		return (0);
}
/*
#include <ctype.h>
//#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
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
		a = ft_isalnum(av[1][0]);
		printf("ft_isalnum: %d", a);
		printf("\n");
		b = isalnum(av[1][0]);
		printf("isalnum: %d", b);
		printf("\n");
	}
 return 0;
 }*/

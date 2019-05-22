/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 06:55:00 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/22 11:22:36 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result = result * sign;
	return (result);
}

/*
**#include <stdio.h>
**#include <stdlib.h>

**int	main(int ac, char **av)
**{
**int i;
**	int a;

**	i = 0;
**	a = 0;
**	if (ac != 2)
**		return 0;
**	else
**	{
**		a = atoi(av[1]);
**		i = ft_atoi(av[1]);
**		printf("You typed: %d", i);
**		printf("\n");
**		printf("Atoi gives: %d", a);
**		printf("\n");
**	}
**	return 0;
**}
*/

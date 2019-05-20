/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 06:48:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/20 10:42:43 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	size_t a;

	a = 0;
	if (ac != 2)
		return 0;
	else 
	{
		a = ft_strlen(av[1]);
		printf("Your string length is: %zu", a);
		printf("\n");
	}
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:41:12 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/29 12:43:13 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	
	i = 0;
	if (!(result = (char*)ft_memalloc(sizeof(char) * 13)))
		return (NULL);
	if (n == -2147483648)
		return (result = "-2147483648");
	if (n > 0)
	{
		result[i] = '-';
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		result[i] = n / 10;
		i++;
		n = n / 10;
	}
	result[i] = n % 10;
	result[i + 1] = '\0';
	return (result);
}

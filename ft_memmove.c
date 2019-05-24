/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:01:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/23 13:57:26 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 		i;
	const char 	*csrc;
	char 		*cdest;
	char 		temp[len];

	i = 0;
	csrc = (const char*)src;
	cdest = (char*)dst;
	if (csrc == NULL || cdest == NULL)
		return NULL;
	while(i < len)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while(i < len)
	{
		cdest[i] = temp[i];
		i++;
	}
	return(dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:01:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/24 08:03:17 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t		i;
	const unsigned char	*csrc;
	unsigned char		*cdest;

	i = 0;
	csrc = (const unsigned char*)src;
	cdest = (unsigned char*)dst;
	if (n == 0)
		return ((void*)dst);
	if (csrc == NULL && cdest == NULL)
		return ((void*)dst);
	while(i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return((void*)dst);
}

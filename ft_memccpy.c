/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:01:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/21 13:32:07 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,int c,size_t n)
{
	size_t 			i;
	const char		*csrc;
	char			*cdest;
	unsigned char	chr;

	chr = c;
	i = 0;
	csrc = (const char*)src;
	cdest = (char*)dst;
	while(i < n)
	{	
		cdest[i] = csrc[i];
		if (csrc[i] == chr)
			return (dst + i + 1);
		i++;	
	}
	return(NULL);
}

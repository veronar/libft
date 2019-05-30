/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:31:12 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:58:55 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > dstsize)
		return (dstsize + srclen);
	if (srclen < (dstsize - dstlen))
		ft_memcpy((dst + dstlen), src, srclen + 1);
	else
	{
		ft_memcpy((dst + dstlen), src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen + dstlen);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:42:20 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/29 08:41:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (ft_strchr(charset, *s))
			return (ret);
		else
			s++;
   			ret++;
	}
	return (ret);
}

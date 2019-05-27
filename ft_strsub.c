/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:20:06 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/27 11:34:18 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	mem = (char*)malloc(sizeof(char) * (len + 1));
	if (mem == NULL)
		return (NULL);
	while (len > 0)
	{
		mem[i] = s[start];
		start++;
		i++;
		len--;
	}
	mem[i] = '\0';
	return (mem);
}

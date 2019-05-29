/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:51:03 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/29 10:40:10 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);	
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	words;
	size_t	k;
	char	**ret;
	size_t	i;
	size_t	x;
	char 	*str;

	i = 0;
	x = 0;
	str = (char*)s;
	if (s == NULL || c == 0)
		return (NULL);
	words = ft_countwords(s, c);
	if (!(ret = (char**)ft_memalloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else 
		{
			k = i;
			while (str[i] != c && str[i] != '\0')
				i++;
			ret[x] = ft_strsub(str, k, (i - k));
			x++;
		}	
	}
	ret[x] = (NULL);
	return (ret);		
}

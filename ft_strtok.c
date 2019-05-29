/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:48:17 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/28 08:50:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
    static char	*p;

	p = 0;
    if (str)
        p = str;
    else if (!p)
        return (0);
    str = p + ft_strspn(p, delim);
    p = str + ft_strcspn(str, delim);
    if (p == str)
        return (p = 0);
    p = *p ? *p = 0, p + 1 : 0;
    return (str);
}

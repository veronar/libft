/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:37:45 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/22 11:24:49 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	if (n == 0)
		return;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str, 2);
   puts(str);

   printf("\n\n");

	strcpy(str,"This is string.h library function");
   puts(str);

   bzero(str, 2);
   puts(str);


   return(0);
}
*/

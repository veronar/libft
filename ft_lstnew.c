/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:05:46 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 15:43:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *c, size_t n)
{
	t_list	*new;

	if (!(new = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (c == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = ft_memalloc(sizeof(n))))
		{
			free(new);
			return (NULL);
		}
		new->content = ft_memcpy(new->content, c, n);
		new->content_size = n;
	}
	new->next = (NULL);
	return (new);
}
/*
int	main()
{
	size_t i = 1;
	char c = 'a';

	t_list	*list_start;
	list_start = ft_lstnew(c, 1);

	printf("The content of the 1st box is %c", list_start->content);

	return (0);
}*/

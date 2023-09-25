/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saleshin <saleshin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:00:28 by saleshin          #+#    #+#             */
/*   Updated: 2023/08/14 18:34:19 by saleshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*prev;

	new_list = NULL;
	next = NULL;
	if (lst != NULL)
	{
		
	}
	while (lst != NULL)
	{
		f(lst->content);
		new_node = ft_lstnew(lst->content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		prev->next = new_node;
		if (new_list == NULL)
			new_list = new_node;
		else
		{
			current = new_list;
			while (current->next != NULL)
				current = current->next;
			current->next = new_node;
		}
		lst = lst->next;
	}
	return (new_list);
}
/*
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL)
		return (NULL);
	f(lst->content);
	new_list = ft_lstnew(lst->content);
	if (new_list == 0)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		if (f != NULL)
			f(lst->content);
		new_node = ft_lstnew(lst->content);
		if (new_list == 0)
			return (NULL);
		new_list->next = lst->next
		lst = lst->next;
	}
	return (new_list);
}
*/
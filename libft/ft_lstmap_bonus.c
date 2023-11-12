/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:25:16 by eliegarc          #+#    #+#             */
/*   Updated: 2023/11/12 09:25:19 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*nodo;

	lst2 = NULL;
	while (lst != NULL)
	{
		nodo = ft_lstnew(lst->content);
		if (nodo == NULL)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		nodo->content = f(nodo->content);
		ft_lstadd_back(&lst2, nodo);
		lst = lst->next;
	}
	return (lst2);
}

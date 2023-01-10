/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:00:48 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 19:20:45 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap_aux(t_list *lst, t_list **new_lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_elem;

	if (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (new_elem == NULL)
		{
			ft_lstclear(new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(new_lst, new_elem);
		ft_lstmap_aux(lst->next, new_lst, f, del);
	}
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	new_lst = NULL;
	ft_lstmap_aux(l)
}

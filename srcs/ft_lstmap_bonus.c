/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:46:18 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:46:20 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Itère sur la liste lst et applique la fonction f aucontenu de chaque élément.
** Crée une nouvelle liste résultant des applications successives de f.
** La fonction del est la pour detruire le contenu d unelement si necessaire
*/

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*previous_elem;
	t_list	*current_elem;
	t_list	*first_elem;

	if (lst == 0)
		return (0);
	previous_elem = 0;
	if (!(current_elem = ft_lstnew(f(lst->content))))
		return (0);
	first_elem = current_elem;
	lst = lst->next;
	while (lst)
	{
		previous_elem = current_elem;
		if (!(current_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first_elem, del);
			return (0);
		}
		previous_elem->next = current_elem;
		lst = lst->next;
	}
	return (first_elem);
}

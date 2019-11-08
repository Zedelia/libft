/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 19:08:12 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:30:29 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Supprime et libère la mémoire de l’élément passé enparamètre, 
** et de tous les élements qui suivent, àl’aide de del et de free(3)
** Enfin, le pointeur initial doit être mis à NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

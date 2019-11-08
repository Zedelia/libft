/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 05:52:36 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:28:58 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Ajoute l’élément new à la fin de la liste.
*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}

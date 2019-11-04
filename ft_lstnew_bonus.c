/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 14:44:20 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 14:39:43 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	if (!(tmp = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		tmp->content = NULL;
	else
		tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}

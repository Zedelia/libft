/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:46:28 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:46:29 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Alloue (avec malloc(3)) et renvoie un nouvelélément.
** La variable content est initialisée àl’aide de la valeur du paramètre
** content. Lavariable next est initialisée à NULL.
*/

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

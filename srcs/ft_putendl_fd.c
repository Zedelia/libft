/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:49 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:52 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Écrit La chaine de caractères s sur le filedescriptor donné,
** suivie d’un retour à la ligne.
*/

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s != NULL && fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

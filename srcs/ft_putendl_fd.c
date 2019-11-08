/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:58:35 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:25:41 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

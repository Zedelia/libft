/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:53:17 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:25:10 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Écrit la chaine de caractères s sur le filedescriptor donné.
**
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0 && s)
		write(fd, s, ft_strlen(s));
}

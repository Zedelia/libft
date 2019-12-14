/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:01:38 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 11:23:39 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in
** a non-destructive manner.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (src < dest)
	{
		while (len--)
			((t_uchar *)dest)[len] = ((t_uchar *)src)[len];
	}
	else if (src >= dest)
	{
		while (i < len)
		{
			((t_uchar *)dest)[i] = ((t_uchar *)src)[i];
			i++;
		}
	}
	return (dest);
}

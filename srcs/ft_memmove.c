/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:01:38 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 16:59:28 by mbos        ###    #+. /#+    ###.fr     */
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
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	else if (src >= dest)
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

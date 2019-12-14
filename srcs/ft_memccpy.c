/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 17:23:18 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 16:56:57 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an t_uchar) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in the string dst 
** is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned int i;

	i = 0;
	if (!dest || !src || !len)
		return (NULL);
	while (i < len)
	{
		((t_uchar *)dest)[i] = ((t_uchar *)src)[i];
		if (((t_uchar *)src)[i] == (t_uchar)c)
			return ((void *)&dest[i + 1]);
		i++;
	}
	return (NULL);
}

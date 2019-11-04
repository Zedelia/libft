/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 09:52:03 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:21:36 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest == src || len == 0)
		return (dest);
	while (len--)
		((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	return (dest);
}

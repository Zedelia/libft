/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:08 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:09 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memcpy() function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use memmove(3) instead
*/

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest == src || len == 0)
		return (dest);
	while (len--)
		((t_uchar *)dest)[len] = ((t_uchar *)src)[len];
	return (dest);
}

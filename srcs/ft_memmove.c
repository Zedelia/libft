/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:20 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:21 by mbos             ###   ########lyon.fr   */
/*                                                                            */
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

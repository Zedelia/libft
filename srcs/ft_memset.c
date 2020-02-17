/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:26 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:27 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memset() function writes len bytes of value c
** (converted to an t_uchar) to the string b.
*/

void	*ft_memset(void *s, int c, size_t len)
{
	if (!s || !len)
		return (s);
	while (len--)
		((t_uchar *)s)[len] = c;
	return (s);
}

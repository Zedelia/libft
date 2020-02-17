/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:46:51 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:46:53 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memchr() function locates the first occurrence of c (converted to
** an t_uchar) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	if (!s || !n)
		return (NULL);
	while (i < n)
	{
		if (((t_uchar *)s)[i] == ((t_uchar)c))
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

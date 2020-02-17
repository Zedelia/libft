/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:01 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:03 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (((t_uchar *)s1)[i] - ((t_uchar *)s2)[i] == 0)
			i++;
		else
			return (((t_uchar *)s1)[i] - ((t_uchar *)s2)[i]);
	}
	return (0);
}

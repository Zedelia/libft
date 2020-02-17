/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:51:55 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:51:58 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int index;

	index = 0;
	while (n && *src)
	{
		*(dest + index++) = *(src++);
		n--;
	}
	while (n)
	{
		*(dest + index++) = '\0';
		n--;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:41:35 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:41:38 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The isalpha() function tests for any character for which isupper(3) or
** islower(3) is true. The value of the argument must be representable
** as an t_uchar or the value of EOF.
*/

int		ft_isalpha(int c)
{
	unsigned int	i;

	i = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

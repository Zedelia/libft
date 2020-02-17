/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:02:20 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:42:01 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The isascii() function tests for an ASCII character, which
**  is any character between 0 and octal 0177 inclusive.
*/

int		ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

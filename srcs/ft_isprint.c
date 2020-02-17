/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:44:42 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:44:51 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The isprint() function tests for any printing character,
** including space (` ').
*/

int		ft_isprint(int c)
{
	if (c < 32 || c >= 127)
		return (0);
	return (1);
}

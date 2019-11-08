/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isprint.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:22:07 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:11:03 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

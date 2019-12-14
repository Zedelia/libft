/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:53:00 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:09:11 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The isalnum() function tests for any character for which isalpha(3)
** or isdigit(3) is true.  The value of the argument must be
** representable as an t_uchar or the value of EOF.
*/

int		ft_isalnum(int c)
{
	if (((c >= '0' && c <= '9')) ||
		((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}

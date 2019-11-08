/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isdigit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:44:34 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:08:46 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The isdigit() function tests for a decimal digit character.
** Regardless of locale, this includes the following characters only:
** 0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 -8 - 9
*/

int		ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

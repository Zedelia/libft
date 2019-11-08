/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tolower.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:44:02 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:12:25 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The tolower() function converts an upper-case
** letter to the corresponding lower-case letter.
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

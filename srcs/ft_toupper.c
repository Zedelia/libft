/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_toupper.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:35:17 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:11:48 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The toupper() function converts a lower-case letter
** to the corresponding upper-case letter.
*/

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

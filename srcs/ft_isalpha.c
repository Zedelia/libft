/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:08:46 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:05:50 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

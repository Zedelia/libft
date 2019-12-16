/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 20:30:53 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:01:25 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (((t_uchar *)s1)[i] - ((t_uchar *)s2)[i] == 0)
			i++;
		else
			return (((t_uchar *)s1)[i] - ((t_uchar *)s2)[i]);
	}
	return (0);
}

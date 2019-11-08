/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:26:27 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 16:48:37 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
*/

void	*ft_memset(void *s, int c, size_t len)
{
	if (!s || !len)
		return (s);
	while (len--)
		((unsigned char *)s)[len] = c;
	return (s);
}

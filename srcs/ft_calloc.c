/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 10:36:42 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:06:35 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The calloc() function contiguously allocates enough space for count objects
** that are size bytes of memory each and returns a pointer to the allocated
** memory. The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void			*pt;
	unsigned int	i;

	i = 0;
	if (!(pt = malloc(count * size)))
		return (NULL);
	ft_bzero(pt, size * count);
	return (pt);
}

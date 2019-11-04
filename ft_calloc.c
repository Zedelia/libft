/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 10:36:42 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:21:01 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

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

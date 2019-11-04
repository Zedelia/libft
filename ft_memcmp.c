/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 20:30:53 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:20:53 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] == 0)
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}

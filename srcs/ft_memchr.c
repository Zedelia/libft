/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 20:16:01 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:00:24 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The memchr() function locates the first occurrence of c (converted to
** an unsigned char) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	if (!s || !n)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

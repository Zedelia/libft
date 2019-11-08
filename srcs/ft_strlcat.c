/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:36:29 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:25:57 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strlcat() function appends the NUL-terminated string src to
** the end of dst. It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	len = 0;
	while (src[len])
		len++;
	while (dst[i] && i < size)
		i++;
	if (i >= size)
		return (len + size);
	while (src[j] && j + i < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (len + i);
}

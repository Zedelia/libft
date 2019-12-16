/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: melodieb <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 20:08:10 by melodieb     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 20:08:18 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int index;

	index = 0;
	while (n && *src)
	{
		*(dest + index++) = *(src++);
		n--;
	}
	while (n)
	{
		*(dest + index++) = '\0';
		n--;
	}
	return (dest);
}

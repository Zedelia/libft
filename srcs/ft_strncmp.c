/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:59:04 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2020/02/11 14:54:23 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strcmp() and strncmp() functions lexicographically compare the
** null-terminated strings s1 and s2.
**
** >> The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n < 1 || !s1 || !s2)
		return (0);
	if ((t_uchar) * s1 == '\0' || (t_uchar) * s2 == '\0')
		return ((t_uchar) * s1 - (t_uchar) * s2);
	while (*s1 == *s2 && n > 1 && (*(s1) != '\0' && *(s2) != '\0'))
	{
		if (*(s1) != *(s2))
			return ((t_uchar) * s1 - (t_uchar) * s2);
		n--;
		s1++;
		s2++;
	}
	return ((t_uchar) * s1 - (t_uchar) * s2);
}

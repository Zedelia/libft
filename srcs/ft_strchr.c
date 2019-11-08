/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:51:11 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 17:21:13 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strchr() function locates the first occurrence of c
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** there fore if c is `\0', the functions locate the terminating `\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

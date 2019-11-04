/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:59:04 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 10:01:29 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n < 1 || !s1 || !s2)
		return (0);
	if ((unsigned char)*s1 == '\0' || (unsigned char)*s2 == '\0')
		return ((unsigned char)*s1 - (unsigned char)*s2);
	while (*s1 == *s2 && n > 1 && (*(s1) != '\0' && *(s2) != '\0'))
	{
		if (*(s1) != *(s2))
			return ((unsigned char)*s1 - (unsigned char)*s2);
		n--;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

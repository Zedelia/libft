/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:09:59 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/12/14 15:13:47 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Alloue (avec malloc(3)) et retourne une nouvellechaine,
** résultat de la concaténation de s1 et s2
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		if (!(join = ft_strdup(s2)))
			return (NULL);
		return (join);
	}
	if (!s2)
	{
		if (!(join = ft_strdup(s1)))
			return (NULL);
		return (join);
	}
	if (!(join = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)))))
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strcat(join, s2);
	return (join);
}

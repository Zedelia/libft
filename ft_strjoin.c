/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:09:59 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 11:59:13 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (join = (char*)s2);
	if (s2 == NULL)
		return (join = (char*)s1);
	if (!(join = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)))))
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strcat(join, s2);
	return (join);
}

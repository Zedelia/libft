/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:09:29 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:23:58 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cpy;
	int		i;

	i = 0;
	if (!s || !(cpy = ft_strdup(s)) || !f)
		return (NULL);
	cpy[ft_strlen(s)] = '\0';
	while (cpy[i])
	{
		cpy[i] = f(i, s[i]);
		i++;
	}
	return (cpy);
}

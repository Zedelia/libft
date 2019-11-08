/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:36:49 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:09:31 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the function free
*/

char	*ft_strdup(const char *s1)
{
	int		len_s1;
	int		i;
	char	*cpy;

	i = 0;
	len_s1 = ft_strlen(s1);
	if (!(cpy = malloc((len_s1 + 1) * sizeof(char))))
		return (NULL);
	while (i < len_s1)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:36:49 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:22:45 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of the
** string's n first caracters s1,
** does the copy of n caracters, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the function free
*/

char	*ft_strndup(const char *s1, size_t n)
{
	size_t		i;
	char		*cpy;

	i = 0;
	if (!(cpy = malloc((n + 1) * sizeof(char))))
		return (NULL);
	while (s1 && s1[i] && i < n)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

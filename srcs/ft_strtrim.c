/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 08:41:48 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 10:01:29 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*cpy_str(const char *s1, int i)
{
	char	*cpy;

	if ((cpy = malloc(sizeof(char) * i + 2)))
	{
		cpy[i + 1] = '\0';
		while (i > -1)
		{
			cpy[i] = s1[i];
			i--;
		}
		return (cpy);
	}
	return (NULL);
}

static int		is_set(char cpy, char const *set)
{
	int		set_i;

	set_i = 0;
	while (set[set_i])
	{
		if (cpy == set[set_i])
			return (1);
		set_i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || s1[0] == '\0')
		return ((char*)s1);
	while (is_set(*s1, set) && s1)
		s1++;
	i = ft_strlen(s1) - 1;
	while (is_set(s1[i], set) && i > 0)
		i--;
	if (i <= 0)
	{
		cpy = malloc(sizeof(char));
		if (cpy == NULL)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	if ((cpy = cpy_str(s1, i)))
		return (cpy);
	else
		return (NULL);
}

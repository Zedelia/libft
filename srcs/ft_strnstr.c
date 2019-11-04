/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:06:02 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 10:01:29 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t locate;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		locate = i;
		while (haystack[i] == needle[j] && needle[j] && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[locate]);
			j++;
			i++;
		}
		j = 0;
		i = locate;
		i++;
	}
	return (NULL);
}

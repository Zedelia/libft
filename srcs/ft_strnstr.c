/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:55:39 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:55:40 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strnstr() function locates the first occurrence of the
** null-terminated string needle in the string haystack.
** where not more than len characters are searched.
** Characters that appear after a `\0' character are not searched.
** Since the strnstr() function is a FreeBSD specific API, it should only be
** used when portability is not a concern.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t locate;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		locate = i;
		while (needle[j] && haystack[i] == needle[j] && i < len)
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

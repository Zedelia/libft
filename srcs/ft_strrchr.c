/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:55:46 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:55:48 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** The strchr() function locates the first occurrence of c
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** there fore if c is `\0', the functions locate the terminating `\0'.
**
** >> The strrchr() function is identical to strchr(), except it locates
** the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int str_len;

	str_len = ft_strlen(s);
	while (str_len >= 0)
	{
		if (s[str_len] == (char)c)
			return ((char *)&s[str_len]);
		str_len--;
	}
	return (NULL);
}

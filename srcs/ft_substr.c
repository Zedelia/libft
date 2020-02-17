/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:06:44 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 13:06:45 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine decaractères issue
** de la chaine donnée en argument. Cette nouvelle chaine commence à
** l’index ’start’ et a pour taille maximale ’len'
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*pt;
	unsigned int		i;

	if (!s)
		return (pt = NULL);
	i = ft_strlen(s);
	if (start > i)
		return (ft_strdup(""));
	i = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!(pt = malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		pt[i] = s[start + i];
		i++;
	}
	pt[i] = 0;
	return (pt);
}

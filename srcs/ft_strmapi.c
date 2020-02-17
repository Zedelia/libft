/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:51:36 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:51:38 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en argument pour créer une nouvelle chaine de caractères
** (avec malloc(3))résultant des applications successives de f
*/

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

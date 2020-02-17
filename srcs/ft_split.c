/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:48:32 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:48:34 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Alloue (avec malloc(3)) et retourne un tableaude chaines de caracteres
** obtenu en séparant s à l’aide du caractère c, utilisé comme délimiteur.
** Le tableau doit être terminé par NULL.
*/

static char			**free_all_strs(char **tab_strs, int j)
{
	while (j > -1)
	{
		ft_memdel((void*)tab_strs[j]);
		j--;
	}
	return (tab_strs = NULL);
}

static char			*cpy_str(char *str, int len)
{
	char	*cpy;

	if (!(cpy = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!len)
	{
		cpy = NULL;
		return (cpy);
	}
	cpy[len] = '\0';
	while (len--)
		cpy[len] = str[len];
	return (cpy);
}

static char			**fill_tab_strs(char **tab_strs, char const *s, char c)
{
	int		i;
	int		j;
	int		start;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (!((tab_strs[j] = cpy_str((char *)&s[start], i - start))))
			return ((free_all_strs(tab_strs, j - 1)));
		if (tab_strs[j])
			j++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab_strs[j] = NULL;
	return (tab_strs);
}

static char			**create_tab_strs(char const *s, char c)
{
	int		i;
	int		len;
	char	**tab_strs;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			len++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	if (!(tab_strs = malloc(sizeof(char *) * (len + 1))))
		return (tab_strs = NULL);
	return (tab_strs);
}

char				**ft_split(char const *s, char c)
{
	char	**tab_strs;

	tab_strs = NULL;
	if (!s || !s[0])
	{
		if ((tab_strs = malloc(sizeof(char) * 1)))
		{
			tab_strs[0] = 0;
			return (tab_strs);
		}
		return (tab_strs = NULL);
	}
	if (!(tab_strs = create_tab_strs(s, c)))
		return ((tab_strs = NULL));
	if (!(fill_tab_strs(tab_strs, s, c)))
	{
		ft_memdel((void*)tab_strs);
		return (tab_strs);
	}
	if (tab_strs[0] == NULL)
		ft_memdel((void*)tab_strs);
	return (tab_strs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:44:56 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:44:58 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine decaractères représentant
** l’integer reçu en argument.Les nombres négatifs doivent être gérés.
*/

static int		nb_str_len(long long int n)
{
	long long int	i;

	i = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*fill_str(char *str, long long int n, int len)
{
	int		start;

	str[len] = '\0';
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		start = 1;
		str[0] = '-';
	}
	else
		start = 0;
	while (len >= start)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	lln;

	lln = n;
	len = nb_str_len(lln);
	if (lln < 0)
		len = len + 1;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = fill_str(str, lln, len);
	return (str);
}

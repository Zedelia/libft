/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:07:03 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 13:07:05 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_unbrlen(t_uintmax nbr)
{
	t_uintmax	dividor;
	int			len;

	dividor = ULONG_MAX - 8446744073709551615;
	if (nbr / dividor)
		return (20);
	else if (nbr == 0)
		return (1);
	len = 0;
	dividor = 1;
	while (nbr / dividor)
	{
		len++;
		dividor *= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int nbr)
{
	char	*return_str;
	int		len;

	len = ft_unbrlen(nbr);
	if (!(return_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return_str[len--] = '\0';
	while (len >= 0)
	{
		return_str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (return_str);
}

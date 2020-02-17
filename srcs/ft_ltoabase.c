/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:46:39 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:46:41 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	count_digit(t_uintmax nbr, int base)
{
	int count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		count++;
		nbr /= base;
	}
	return (count);
}

char			*ft_ltoabase(t_uintmax nbr, const char *base)
{
	int		base_len;
	char	*itoa_str;
	int		nbr_char;

	if (nbr == 0)
		return (ft_strsub(base, 0, 1));
	base_len = ft_strlen(base);
	nbr_char = count_digit(nbr, base_len);
	itoa_str = malloc(sizeof(char) * (nbr_char + 1));
	itoa_str = (char*)ft_memset((void*)itoa_str, '\0', (size_t)nbr_char);
	itoa_str[nbr_char--] = '\0';
	while (nbr)
	{
		itoa_str[nbr_char--] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (itoa_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:48:03 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:48:05 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	long long int lln;

	lln = n;
	if (lln < 0)
	{
		ft_putchar('-');
		lln *= -1;
	}
	if (lln < 10)
		ft_putchar(lln + '0');
	if (lln > 9)
	{
		ft_putnbr(lln / 10);
		ft_putnbr(lln % 10);
	}
}

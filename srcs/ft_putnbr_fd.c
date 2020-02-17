/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:47:56 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:47:58 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Écrit l’integer n sur le file descriptor donné.
*/

void	ft_putnbr_fd(int n, int fd)
{
	long long int		lln;

	lln = n;
	if (lln < 0)
	{
		ft_putchar_fd('-', fd);
		lln = -lln;
	}
	if (lln > 9)
	{
		ft_putnbr_fd(lln / 10, fd);
		ft_putchar_fd((lln % 10) + '0', fd);
	}
	else
		ft_putchar_fd(lln + '0', fd);
}

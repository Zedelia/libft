/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:00:53 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 10:01:29 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

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

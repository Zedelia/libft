/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:02:47 by melodiebos   #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:23:58 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_floor.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:34:20 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:34:35 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

long long		ft_floor(long double nb)
{
	long long	nbi;

	nbi = (long long)nb;
	return (nb < nbi ? nbi - 1 : nbi);
}

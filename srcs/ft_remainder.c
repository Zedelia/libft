/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_remainder.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 15:14:42 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 15:22:46 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

float	ft_remainder(float	numerator, float denominator)
{
	float	r;

	r = denominator - ft_fmod(numerator, denominator);
	return (r);
}

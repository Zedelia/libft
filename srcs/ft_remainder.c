/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:48:25 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 13:11:34 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

float	ft_remainder(float numerator, float denominator)
{
	float	r;

	r = denominator - ft_fmod(numerator, denominator);
	return (r);
}

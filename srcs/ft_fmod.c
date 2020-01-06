/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fmod.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:38:42 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:38:57 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

long double			ft_fmod(long double nb, long double mod)
{
	return (nb - mod * ft_floor(nb / mod));
}
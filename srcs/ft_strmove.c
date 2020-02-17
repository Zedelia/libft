/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:51:42 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:51:43 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Remove the fisrt part of the string from a new given start.
** Fill the end with '\0'.
*/

void	ft_strmove(char *begin_str, char *new_begin)
{
	size_t	new_len;

	new_len = ft_strlen(new_begin);
	ft_memmove(begin_str, new_begin, new_len);
	ft_bzero(begin_str + new_len, new_begin - begin_str);
}

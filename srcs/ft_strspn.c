/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:55:55 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:55:56 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i;
	char	ptr;

	i = 0;
	while (*s && (ptr = ft_strchr(charset, *s++) != NULL))
		i++;
	return (i);
}

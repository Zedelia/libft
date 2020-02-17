/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:56:01 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 12:56:01 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!(substring = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	substring = (char*)ft_memset((void*)substring, '\0', len);
	ft_strncpy(substring, s + start, len);
	substring[len] = '\0';
	return (substring);
}

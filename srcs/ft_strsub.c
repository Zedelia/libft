/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: melodieb <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 20:04:33 by melodieb     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 20:07:14 by melodiebos  ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

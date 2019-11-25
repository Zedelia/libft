/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strspn.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/25 12:26:51 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/25 12:27:04 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

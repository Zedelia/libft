/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbos <mbos@student.le-101.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:07:11 by mbos              #+#    #+#             */
/*   Updated: 2020/02/17 13:15:19 by mbos             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int			strlen_gnl(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char		*ft_join(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*join;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!(join = malloc(sizeof(char)
			* ((strlen_gnl(s1) + strlen_gnl(s2) + 1)))))
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] && s2[j] != '\n')
		join[i++] = s2[j++];
	free(s1);
	s1 = NULL;
	join[i] = '\0';
	return (join);
}

t_lst_line	*ft_create_lst_line(char *line)
{
	t_lst_line *new_lst;

	if (!(new_lst = malloc(sizeof(t_lst_line))))
		return (NULL);
	new_lst->line = ft_join(NULL, line);
	new_lst->status = Not_full;
	new_lst->next_line = NULL;
	return (new_lst);
}

t_lst_fd	*ft_create_lst_fd(t_lst_fd *lst, int fd)
{
	t_lst_fd	*new_lst;

	if (!(new_lst = malloc(sizeof(t_lst_fd))))
		return (NULL);
	new_lst->lst_fd = fd;
	if (!(new_lst->first_line = ft_create_lst_line("")))
		return (NULL);
	new_lst->next_fd = NULL;
	if (!lst)
		return (new_lst);
	else if (fd != lst->lst_fd)
		lst->next_fd = new_lst;
	return (new_lst);
}

/*
** Delete first elem
** lst_line = lst_fd->first_line
*/

void		ft_popout_read_elem(t_lst_line *lst, t_lst_fd **fd, t_lst_fd **s)
{
	t_lst_fd	*tmp;

	(*fd)->first_line = lst->next_line;
	free(lst->line);
	lst->line = NULL;
	free(lst);
	lst = NULL;
	if (!(*fd)->first_line && (*s) == (*fd))
	{
		tmp = (*s)->next_fd;
		if ((*s) == (*fd))
		{
			free((*s));
			(*s) = tmp;
			(*fd) = NULL;
			return ;
		}
		while (tmp != (*fd) && tmp->next_fd != (*fd))
			tmp = tmp->next_fd;
		tmp->next_fd = (*fd)->next_fd;
		free((*fd));
		(*fd) = NULL;
	}
}

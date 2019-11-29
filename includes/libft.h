/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:06:31 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 17:04:30 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
/*
** ---------------------------------- FT
** ---------------------------------- MEMORY
*/
void			*ft_calloc(size_t count, size_t size);

void			*ft_memset(void *s, int c, size_t len);
void			ft_bzero(void *s, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memccpy(void *dest, const void *src, int c, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
void			ft_memdel(void **ap);

/*
** ---------------------------------- FT
** ---------------------------------- IS TYPE
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
/*
** ---------------------------------- FT
** ---------------------------------- TO
*/
int				ft_toupper(int c);
int				ft_tolower(int c);
/*
** ---------------------------------- FT
** ---------------------------------- STR
*/
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strcpy(char *dest, const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_strmove(char *begin_str, char *new_begin);
char			*ft_strnstr(const char *haystack,
							const char *needle, size_t len);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_isincharset(char c, char const *charset);
/*
** ---------------------------------- FT
** ---------------------------------- PUT
*/
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char const *s);

void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
/*
** ---------------------------------- FT
** ---------------------------------- BASE
*/
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
/*
** ---------------------------------- FT
** ---------------------------------- LIST
*/
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void*));

#endif

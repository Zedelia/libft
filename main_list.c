#include "libft.h"

void	f(void *elem)
{
	char	*content;

	content = (char *)elem;
	*content = '*';
	
}

void    del(void *ptr)
{
	free((char *)ptr);
	ptr = NULL;
}

void    *f_map(void *ptr)
{
	char	*content;

	content = ft_strdup((char *)ptr);
	*content = '_';
	return(content);
}

int		main(void)
{
	t_list  *tmp;
	t_list  *list;
	t_list  *new0;
	t_list  *new1;
	t_list  *new2;
	t_list  *new3;
	t_list  *map_test;
	
	list = NULL;

// Test lstnew--------------------------------------
	printf("\n--------------------->> LST NEW <<---------------------\n\n");

	printf("The list should be composed with 5 elem [You ][are ][a ][wondeful ][person !]\nlet's create each elem :\n\n");
	list = ft_lstnew("You ");
	printf("elem 1 : [%s]\n", list->content);
	new0 = ft_lstnew("are ");
	printf("elem 2 : [%s]\n", new0->content);
	new1 = ft_lstnew("a ");
	printf("elem 3 : [%s]\n", new1->content);
	new2 = ft_lstnew("wonderful ");
	printf("elem 4 : [%s]\n", new2->content);
	new3 = ft_lstnew("person !");
	printf("elem 5 : [%s]\n", new3->content);


// TEST ladd_front with lstnew above----------------------------
	printf("\n--------------------->> LST add FRONT <<---------------------\n\n");
	printf("Let's link all of them with add_front so the first added will be the last printed\n\n");

	ft_lstadd_front(&list, new0);
	ft_lstadd_front(&list, new1);
	ft_lstadd_front(&list, new2);
	ft_lstadd_front(&list, new3);

	tmp = list;
	while (tmp != NULL)
	{
		printf("[%s]\n", tmp->content);
		tmp = tmp->next;
	}

// TEST add_back with lstnew above----------------------------
	printf("\n--------------------->> LST add BACK <<---------------------\n\n");
	printf("Now we link them with add_back so the first added will be the first printed\n\n");

	t_list *list1 = ft_lstnew(ft_strdup("You "));
	t_list *new01 = ft_lstnew(ft_strdup("are "));
	t_list *new11 = ft_lstnew(ft_strdup("a "));
	t_list *new21 = ft_lstnew(ft_strdup("wonderful "));
	t_list *new31 = ft_lstnew(ft_strdup("person !"));

	ft_lstadd_back(&list1, new01);
	ft_lstadd_back(&list1, new11);
	ft_lstadd_back(&list1, new21);
	ft_lstadd_back(&list1, new31);
	tmp = list1;
	while (tmp!= NULL)
	{
		printf("[%s]\n", tmp->content);
		tmp = tmp->next;
	}

// TEST LISTITER with f function above----------------------------
	printf("\n--------------------->> LST ITER <<---------------------\n\n");
	printf("With f function we're going to replace with '*' the lst->content[0] \n\n");

	tmp = list1;
	ft_lstiter(tmp, f);
	while (tmp != NULL)
	{
		printf("[%s]\n", tmp->content);
		tmp = tmp->next;
	}

// TEST lst LAST----------------------------
	printf("\n--------------------->> LST LAST <<---------------------\n\n");
	printf("we add an element with add_back and see what happen \n\n");

	tmp = list1;
	printf("the actual last is : [%s]\n", ft_lstlast(tmp)->content);
	ft_lstadd_back(&list1, ft_lstnew(ft_strdup("I'm new !")));
	printf("the new last is    : [%s]\n\n", ft_lstlast(tmp)->content);


// TEST LIST SIZE----------------------------
	printf("\n--------------------->> LST SIZE <<---------------------\n\n");
	printf("Remember, our list size is supposed to be 5 + 1 = 6 \n");
	printf("ft_lstsize : %d\n", ft_lstsize(list1));
	if (ft_lstsize(list1) == 6)
		printf("Yeah ! good job bro :]\n");


// TEST lstdelone
	printf("\n--------------------->> LST DELONE <<---------------------\n\n");
	printf("We are going to delete the last element with lst_last, so much FUN !!\n");

	tmp = list1;

	t_list *last = ft_lstlast(tmp);
	ft_lstdelone(last, del);
	printf("what is now in the last : [%s]\n\n", last->content);


// TEST lstmap with f_map function above
	printf("\n--------------------->> LST DELONE <<---------------------\n\n");
	printf("lst_map replaces content with '*'\n");

	tmp = list1;
	map_test = ft_lstmap(tmp, f_map, del);

	while (map_test != NULL)
	{
		printf("[%s]\n", map_test->content);
		map_test = map_test->next;
	}
	while (list1 != NULL)
	{
		printf("controle : [%s]\n", list1 ->content);
		list1  = list1 ->next;
	}


}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_istype_to.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mbos <mbos@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 17:51:56 by mbos         #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 18:41:50 by mbos        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>

int        main(void)
{
//	char  s[30] = "aaaaaaaaaaaaa";


// ISALPHA
	printf("\n--------------------->> ALPHA <<---------------------\n\n");
	printf("> 101 | e\n[%d]\n", ft_isalpha(101));
	printf("[%d] - T\n\n", isalpha(101));
	printf("> 50 | 2\n[%d]\n", ft_isalpha(50));
	printf("[%d] - T\n\n", isalpha(50));
	printf("> 172| \n[%d]\n", ft_isalpha(172));
	printf("[%d] - T\n\n", isalpha(172));

// ISDIGIT
	printf("\n--------------------->> DIGIT <<---------------------\n\n");
	printf("> 50 | 2\n[%d]\n", ft_isdigit(50));
	printf("[%d] - T\n\n", isdigit(50));
	printf("110\n[%d]\n", ft_isdigit(110));
	printf("[%d] - T\n\n\n", isdigit(110));

// ISALUM
	printf("\n--------------------->> ALNUM <<---------------------\n\n");
	printf("> 97\n[%d]\n", ft_isalnum(97));
	printf("[%d] - T\n\n", isalnum(97));
	printf("> 12 | np\n[%d]\n", ft_isalnum(12));
	printf("[%d] - T\n\n\n", isalnum(12));

// ISASCII
	printf("\n--------------------->> ASCII <<---------------------\n\n");
	printf("> 123 | {\n[%d]\n", ft_isascii(123));
	printf("[%d] - T\n\n", isascii(123));
	printf("> 330 | \n[%d]\n", ft_isascii(330));
	printf("[%d]\n\n\n", isascii(330));

// ISPRINT
	printf("\n--------------------->> PRINTABLE <<---------------------\n\n");
	printf("> 56 | 8 \n[%d]\n", ft_isprint(56));
	printf("[%d] - T\n\n", isprint(56));
	printf("> 128 | \n[%d]\n", ft_isprint(128));
	printf("[%d] - T\n\n", isprint(128));

// TOUPPER
	printf("\n--------------------->> TO UPPER <<---------------------\n\n");
	printf("> 97 | a\n[%d]\n", ft_toupper(97));
	printf("[%d] - T\n\n", toupper(97));
	printf("> 67 | C\n[%d]\n", ft_toupper(67));
	printf("[%d]\n\n\n", toupper(67));
	printf("> 35 | #\n[%d]\n", ft_toupper(35));
	printf("[%d] - T\n\n\n", toupper(35));

// TOLOWER
	printf("\n--------------------->> TO LOWER <<---------------------\n\n");
	printf("> 67 | C \n[%d]\n", ft_tolower(67));
	printf("[%d] - T\n\n", tolower(67));
	printf("> 100\n[%d]\n", ft_tolower(100));
	printf("[%d]- T\n\n", tolower(100));


	return(0);
}
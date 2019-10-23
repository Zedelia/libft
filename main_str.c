#include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>


int        main(void)
{

   
// STRNCMP--------------------------------------------------------
	printf("\n--------------------->> STR n CMP <<---------------------\n\n");
	
	printf("fraise | fraise-a-la-creme | 7\n");
	printf("[%d]\n", ft_strncmp("fraise", "fraise-a-la-creme", 7));
	printf("[%d] T \n\n\n", strncmp("fraise", "fraise-a-la-creme", 7));

	printf("fraise | fraise-a-la-creme | 10\n");
	printf("[%d]\n", ft_strncmp("fraise", "fraise-a-la-creme", 10));
	printf("[%d] T \n\n\n", strncmp("fraise", "fraise-a-la-creme", 10));

	printf("fraise | fraise-a-la-creme | 1\n");
	printf("[%d]\n", ft_strncmp("fraise", "fraise-a-la-creme", 1));
	printf("[%d] T \n\n\n", strncmp("fraise", "fraise-a-la-creme", 1));

	printf("fraise | fraise-a-la-creme | 0\n");
	printf("[%d]\n", ft_strncmp("fraise", "fraise-a-la-creme", 0));
	printf("[%d] T \n\n\n", strncmp("fraise", "fraise-a-la-creme", 0));

	printf(" '' | fraise-a-la-creme | 7\n");
	printf("[%d]\n", ft_strncmp("", "t8stss", 7));
	printf("[%d] T \n\n\n", strncmp("", "fraise-a-la-creme", 7));

	printf("fraise | '' | 7\n");
	printf("%d\n", ft_strncmp("fraise", "", 7));
	printf("%d T \n\n\n", strncmp("fraise", "", 7));

	printf("fraise | fraise-a-la-creme | 7\n");
	printf("[%d]\n", ft_strncmp("fraise", "fraise-a-la-creme", 7));
	printf("[%d] T \n\n\n", strncmp("fraise", "fraise-a-la-creme", 7));

	printf("(null) | (null) | 7\n");
	printf("[%d]\n", ft_strncmp(0, 0, 7));
	printf("[seg fault] T \n\n\n");

	printf("(null) | fraise-a-la-creme | 7\n");
	printf("[%d]\n", ft_strncmp(0, "fraise-a-la-creme", 7));
	printf("[seg fault]\n\n\n");

	printf("fraise | 0 | 7\n");
	printf("[%d]\n", ft_strncmp("fraise", 0, 7));
	printf("[seg fault]\n\n");



// STRlCAT--------------------------------------------------------
	printf("\n--------------------->> STR l CAT <<---------------------\n\n");



	printf("s = '           '  | dest = 'je suis un genie' | 12\n");
	printf("[%zu]\n", ft_strlcat("                             ","je suis un genie", 12));
	printf("[%zu] - T\n\n\n", strlcat("                             ","je suis un genie", 12)); 

	printf("s = '           '  | dest = 'je suis un genie' | 3\n");
	printf("[%zu]\n", ft_strlcat("                             ","je suis un genie", 3));
	printf("[%zu] - T\n\n\n", strlcat("                             ","je suis un genie", 3)); 



// STRJOIN--------------------------------------------------------
	printf("\n--------------------->> STR JOIN <<---------------------\n\n");

    printf("abcdefg | 123456\n");
    printf("[%s]\n", ft_strjoin("abcdefg", "123456"));
	printf("[abcdefg123456] - T\n\n\n");

	printf("'0' | 123456\n");
    printf("[%s]\n", ft_strjoin(0, "123456"));
	printf("[123456] - T\n\n\n");

	printf("abcdefg | '0'\n");
    printf("[%s]\n", ft_strjoin("abcdefg", 0));
	printf("[abcdefg] - T\n\n\n");

	printf("'0'| '0'\n");
    printf("[%s]\n", ft_strjoin(0, 0));
	printf("[(null)] - T\n\n\n");



// STRCHR--------------------------------------------------------
	printf("\n--------------------->> STR CHR <<---------------------\n\n");
	printf("[I love trains !] | 'o' \n");
	printf("[%s]\n", ft_strchr("I love trains !", 'o'));
	printf("[%s] - T\n\n\n", strchr("I love trains !", 'o'));

	printf("[I love trains !] | '\\0' \n");
	printf("[%s]\n", ft_strchr("I love trains !", 0));
	printf("[%s] - T\n\n\n", strchr("I love trains !", 0));

	printf("[I love trains !] | '!' \n");
	printf("[%s]\n", ft_strchr("I love trains !", '!'));
	printf("[%s] - T\n\n\n", strchr("I love trains !", '!'));

	printf("[I love trains !] | '*' \n");
	printf("[%s]\n", ft_strchr("I love trains !", '*'));
	printf("[%s] - T\n\n\n", strchr("I love trains !", '*'));



// STRrCHR--------------------------------------------------------
	printf("\n--------------------->> STR r CHR <<---------------------\n\n");

	printf("[My horse is amazing] | 'i'\n");
	printf("[%s]\n", ft_strrchr("My horse is amazing", 'i'));
	printf("[%s] - T\n\n\n", strrchr("My horse is amazing", 'i'));

	printf("[My horse is amazing] | '*'\n");
	printf("[%s]\n", ft_strrchr("My horse is amazing", '*'));
	printf("[%s] - T\n\n\n", strrchr("My horse is amazing", '*'));

	printf("[My horse is amazing] | '\\0'\n");
	printf("[%s]\n", ft_strrchr("My horse is amazing", '*'));
	printf("[%s] - T\n\n\n", strrchr("My horse is amazing", '*'));



// STRlCPY----------------------------------------------------
	printf("\n--------------------->> STR l CPY <<---------------------\n\n");

	char s1[] = "let's destroy the patriarcat";
	char s1_bis[] = "let's destroy the patriarcat";
	char s2[] = "Great idea";


	printf("[%s] | [%s] | 3\n", s1, s2);
	printf("[%zu]\n", ft_strlcpy(s1, s2, 3));
	printf("[%zu] - T\n\n\n", strlcpy(s1, s2, 3));

	printf("[%s] | [%s] | 28\n", s1_bis, s2);
	printf("[%zu]\n", ft_strlcpy(s1_bis, s2, 28));
	printf("[%zu] - T\n\n\n", strlcpy(s1_bis, s2, 28));


// STRNSTR----------------------------------------------------
	printf("\n--------------------->> STR n STR <<---------------------\n\n");

	printf("[oxo] | 'this oxooxo is absolutely amazing' | 34\n");
	printf("[%s]\n", ft_strnstr("this oxooxo is absolutely amazing", "oxo", 34));
	printf("[%s] - T\n\n\n", strnstr("this oxooxo is absolutely amazing", "oxo", 34)); 

	printf("[oxo] | 'oxooxo is absolutely amazing' | 34\n");
	printf("[%s]\n", ft_strnstr("oxooxo is absolutely amazing", "oxo", 34));
	printf("[%s] - T\n\n\n", strnstr("oxooxo is absolutely amazing", "oxo", 34)); 

	printf("[oxo] | 'is absolutely amazingoxo' | 34\n");
	printf("[%s]\n", ft_strnstr("is absolutely amazingoxo", "oxo", 34));
	printf("[%s] - T\n\n\n", strnstr("is absolutely amazingoxo", "oxo", 34)); 

	printf("[oxo] | 'is absolutely amazing' | 34\n");
	printf("[%s]\n", ft_strnstr("is absolutely amazing", "oxo", 34));
	printf("[%s] - T\n\n\n", strnstr("is absolutely amazing", "oxo", 34)); 

	printf("[oxo] | 'is absolutely amazing' | 2\n");
	printf("[%s]\n", ft_strnstr("is absolutely amazing", "oxo", 2));
	printf("[%s] - T\n\n\n", strnstr("is absolutely amazing", "oxo", 2)); 


// STRDUP----------------------------------------------------
	printf("\n--------------------->> STR DUP <<---------------------\n\n");

	printf("dup = let's destroy the patriarcat\n");
	if (ft_strdup("let's destroy the patriarcat"))
		printf (">>> yeah ! np with your function, it has been dup\n\n\n");
	else 
		printf(">> too bad :/, it didn't work\n\n\n"); 


// STRLEN----------------------------------------------------
	printf("\n--------------------->> STR LEN <<---------------------\n\n");

	printf("0123456789\n");
	printf("[%zu]\n", ft_strlen("0123456789"));
	printf("[%zu] - T\n\n\n", strlen("0123456789"));

	printf("[]\n");
	printf("[%zu]\n", ft_strlen(""));
	printf("[%zu] - T\n\n\n", strlen(""));

	return(0);
}
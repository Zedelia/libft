#include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>

char    test_map(unsigned int i, char c)
{
    i = 0;
    c = '*';
    return (c);
}

int        main(void)
{
	char	**split;
	int		i = 0;

// SUBSTR---------------------------------------------------------------
	printf("\n--------------------->> SUBSTR <<---------------------\n");

	printf("'I'm a libertarian witch ! ' | start: 5 | len: 12\n");
	printf("[%s]\n", ft_substr("I'm a libertarian witch ! ", 4, 12));
	printf("[a libertarian] - T\n\n\n");

	printf("'I'm a libertarian witch ! ' | start: 0 | len: 3\n");
	printf("[%s]\n", ft_substr("I'm a libertarian witch ! ", 0, 3));
	printf("[I'm] - T\n\n\n");

	printf("'I'm a libertarian witch ! ' | start: 18 | len: 10000\n");
	printf("[%s]\n", ft_substr("I'm a libertarian witch ! ", 18, 10000));
	printf("strlen = [%ld]\n", ft_strlen(ft_substr("I'm a libertarian witch ! ", 18, 10000)));
	printf("[witch ! ] - T\nstrlen = [8] - T\n\n\n");

	printf("'\\0' | start: 3 | len: 7\n");
	printf("[%s]\n", ft_substr(0, 5, 12));
	printf("[(null)] - T\n\n\n");



// SPLIT---------------------------------------------------------------
	printf("\n--------------------->> SPLIT <<---------------------\n");

	printf("\ns   : [  I am a genius      ]\nsep : [ ]\n");
    split = ft_split("   I am a genius     ", ' ');
	while (split[i])
	{
		printf("[%s]\n", split[i]);
		i++;
	}
	printf("[I] - T\n[am] - T\n[a] - T\n[genius] - T\n");
	printf("------\n");


	free(split);
	printf("\ns   : [Ilovebanana]\nsep : [-]\n");
    split = ft_split("Ilovebanana", '-');
	i = 0;
	while (split[i])
	{
		printf("[%s]\n", split[i]);
		i++;
	}
	printf("[Ilovebanana] - T\n-------\n");

	free(split);
	printf("\ns   : [there is no sep]\nsep : [\\0]\n");
    split = ft_split("there is no sep", 0);
	i = 0;
    if (split[0])
		printf("[%s]\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == [there is no sep]\n-------\n");
	

	free(split);
	printf("\ns   : [           ]\nsep : [ ]\n");
    split = ft_split("        ", ' ');
	if (split[0] == NULL)
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");

	free(split);
	printf("\ns   : [\\0]\nsep : [a]\n");
    split = ft_split(0, 'a');
	i = 0;
    if (split)
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");
	
	free(split);
	printf("\ns   : [\\0]\nsep : [\\0]\n");
    split = ft_split(0, 0);
	i = 0;
    if (!(*split))
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");


    printf("\nLet's have a look on your Malloc\n I'm going to printf your file !! So much FUN !! \n");


    // STRTIM---------------------------------------------------------
    printf("\n--------------------->> STRTRIM <<---------------------\n");

    
    printf("\ns   : [     I am really found of CHOCOOOOOLAAAAATE !!      ]\nsep : [ ]\n");
	if (ft_strncmp(ft_strtrim("     I am really found of CHOCOOOOOLAAAAATE !!      ", " "), "I am really found of CHOCOOOOOLAAAAATE !!", 53) == 0)
        printf("[%s] - Good Job !\n\n------------\n", ft_strtrim("     I am really found of CHOCOOOOOLAAAAATE !!      ", " "));
    else
        printf("This is a FAIL\n------------\n");

    printf("\ns   : [     trim this is easy    ]\nsep : [ trys]\n");
    if (ft_strncmp(ft_strtrim("     trim this is easy    ", " trys"), "im this is ea", 14) == 0)
        printf("[%s]\n------------\n", ft_strtrim("     trim this is easy    ", " trys"));
    else
        printf("This is a FAIL\n------------\n");
    
    printf("\ns   : [   \\t  \\n\\n \\t\\t  \\n\\n\\nHello \\t  Please\\n Trim me !\\n   \\n \\n \\t\\t\\n  ]\nsep : [ \\n\\t]\n");
    if (ft_strncmp(ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"), "Hello \t  Please\n Trim me !", 31) == 0)
        printf("[%s]\n------------\n", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
    else
        printf("This is a FAIL\n------------\n");
    


    // ITOA---------------------------------------------------------
    printf("\n--------------------->> ITOA <<---------------------\n\n");
    
    char  *s = "-2147483648";
    char  *s2 = "2147483647";

	printf("Let's try the max and min [%s] & [%s]\n", s, s2);

    printf("[%s]\n", ft_itoa(-2147483648));
    printf("[%s]\n\n", ft_itoa(2147483647));

    // ITOA---------------------------------------------------------
    printf("\n--------------------->> MAPI <<---------------------\n\n");
    
    s = "this string";

    printf("Every char in [%s] (11) should be replace by a '*'\n", s);
    printf("[%s] (%lu)\n\n", ft_strmapi(s, test_map), strlen(s));


	return(0);

/*
    // STRMAPI
	printf("%s\n\n", ft_strmapi(s, fonction_test));
*/

}
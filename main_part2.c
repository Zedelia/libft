#include "libft.h"

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

// SPLIT---------------------------------------------------------------
	printf("\n--------------------->> SPLIT <<---------------------\n");

	printf("\ns   : [  I am a genius      ]\nsep : [ ]\n");
    split = ft_split("   I am a genius     ", ' ');
	while (split[i])
	{
		printf("[%s]\n", split[i]);
		i++;
	}
	printf("------\n");

	ft_memdel((void **)split);
	printf("\ns   : [Ilovebanana]\nsep : [ ]\n");
    split = ft_split("Ilovebanana", ' ');
	i = 0;
	while (split[i])
	{
		printf("[%s]\n", split[i]);
		i++;
	}
	printf("-------\n");

	ft_memdel((void **)split);
	printf("\ns   : [there is no sep]\nsep : []\n");
    split = ft_split("there is no sep", 0);
	i = 0;
	while (split[i])
	{
		printf("[%s]\n", split[i]);
		i++;
	}
	printf("-------\n");

	ft_memdel((void **)split);
	printf("s   : [           ]\nsep : [ ]\n");
    split = ft_split("        ", ' ');
	if (split[0] == NULL)
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");

	ft_memdel((void **)split);
	printf("\ns   : []\nsep : [a]\n");
    split = ft_split("", 'a');
	i = 0;
    if (split)
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");

    ft_memdel((void **)split);
	printf("\ns   : []\nsep : []\n");
    split = ft_split("", 0);
	i = 0;
    if (split)
		printf("[%s] = Good job ! It's NULL\n-------\n", split[0]);
	else
		printf("Too bad, you should return a split[0] == NULL\n-------\n");


    // STRTIM---------------------------------------------------------
    printf("\n--------------------->> STRTRIM <<---------------------\n");

    
    printf("\ns   : [     I am really found of CHOCOOOOOLAAAAATE !!      ]\nsep : [ ]\n");
	if (ft_strtrim("     I am really found of CHOCOOOOOLAAAAATE !!      ", " "))
        printf("[%s]\n\n------------\n", ft_strtrim("     I am really found of CHOCOOOOOLAAAAATE !!      ", " "));
    else
        printf("This is a FAIL\n------------\n");

    printf("\ns   : [     You have to trim this string with space & 5 amazing letters    ]\nsep : [ rYoes]\n");
    if (ft_strtrim("     You have to trim this string with space & 4 amazing letters    ", " rYoes"))
        printf("[%s]\n------------\n", ft_strtrim("  You have to trim this string with space & 4 amazing letters ", " rYoes"));
    else
        printf("This is a FAIL\n------------\n");
    
    printf("\ns   : [   \\t  \\n\\n \\t\\t  \\n\\n\\nHello \\t  Please\\n Trim me !\\n   \\n \\n \\t\\t\\n  ]\nsep : [ \\n\\t]\n");
    if (ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"))
        printf("[%s]\n------------\n", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
    else
        printf("This is a FAIL\n------------\n");
    
    printf("\nLet's have a look on your Malloc\n I'm going to printf your file !! So much FUN !! \n");


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
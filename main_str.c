#include "libft.h"



int        main(void)
{

   
// STRNCMP
	printf("%d\n", ft_strncmp("test", "testss", 7));
	printf("TEMOIN :\n%d\n", strncmp("test", "testss", 7));

	printf("\n\n");

// STRlCAT
//	printf("\n>> STRlCAT \ns = %s\ndest = %s\n", t_s1, t_dest1);
	printf("%zu\n", ft_strlcat("                             ","lorem ipsum dolor sit amet", 5));
	printf("TEMOIN :\n%zu\n", strlcat("                             ", "lorem ipsum dolor sit amet", 5)); 
	printf("\nTEST size = 0\n");
	printf("%zu\n", ft_strlcat("                             ", "lorem ipsum dolor sit amet", 0));
	printf("TEMOIN :\n%zu\n", strlcat("                             ", "lorem ipsum dolor sit amet", 0)); 

// STRJOIN
    printf("\n>> STRJOIN \ns1 = %s\ns2 = %s\n", "abcdefg", "123456");
    printf("%s\n", ft_strjoin("abcdefg", "123456"));

// SUBSTR
	printf("\n>> SUBSTR \n s = %s\nstart: 5 len: 12\n", "abcdefg");
	printf("%s\n", ft_substr("abcdefg", 4, 12));

// STRCHR
	printf("\n>> STRCHR \ns = %s\nint: 52 (<=> 4)\n", "abcdefg");
	printf("%s\n", ft_strchr("abcdefg", '4'));
	printf("TEMOIN\n%s\n", strchr("abcdefg", '4'));

// STRrCHR
	printf("\n>> STRrCHR \ns = %s\n int: 52", "abcdefg");
	printf("%s\n", ft_strrchr("abcdefg", 52));
	printf("TEMOIN\n%s\n", strrchr("abcdefg", 52));

// STRlCPY
	printf("\n>> STRlCPY \ns2 = %s\ndest2 = %s\n", "abcdefg", "123456");
	printf("%zu\n", ft_strlcpy("abcdefg", "123456", 0));
	printf("TEMOIN :\n%zu\n", strlcpy("abcdefg", "123456", 0)); 
/*
// STRNSTR
	printf("\n>> STRNSTR \ns = %s\nneedle = 2\n", t_dest2);
	printf("%s\n", ft_strnstr(t_dest2, "2", 10));
	printf("TEMOIN :\n%s\n", strnstr(t_dest2, "2", 10)); 

// STRDUP
	printf("\n>> STRDUP \ndest2 = %s\n", t_s1);
	printf("%s\n", ft_strdup(t_s1));
	printf("TEMOIN :\n%s\n", strdup(t_s1)); 

// STRLEN //
	printf("\n>> STRLEN \ndest = %s\n", t_s1);
	printf("%zu\n", ft_strlen(t_s1));
	printf("TEMOIN :\n%zu\n", strlen(t_s1));

// STRLEN //
	printf("\n>> STRLEN \ndest = %s\n", t_s1);
	printf("%zu\n", ft_strlen(t_s1));
	printf("TEMOIN :\n%zu\n", strlen(t_s1));
*/
	return(0);
}
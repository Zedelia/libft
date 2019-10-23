#include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>

int        main(void)
{
	const char *str;
//	char s[30] = "123456";
//  char dest[30] = "abcdef";

    char s2[30] = "123456";
//    char dest2[30] = "abcdef";

/*
//	int i = 0;
// Memmove
	printf("\n>> MEMMOVE \nsrc = %s\ndest = %s\n",s2, dest2);
	printf("%s\n", ft_memmove((dest2), s2, 3));
	printf("TEMOIN :\n%s\n", memmove(dest, s, 3));
	printf("\n>> MEMMOVE \nsrc = NULL\ndest = NULL\n");
	printf("%s\n",ft_memmove(((void *)0), ((void *)0), 5));
*/

	char *pouet = "z";
	char *lolzer = (char *)&pouet[2];
	lolzer = "aaaaaaaaaa";
	str = ft_memchr(pouet, 'a', 50);
	if (!str)
		printf("NULL");
	else
		printf("\n%s\n",str);
	

// Memchr
	printf("\n>> MEMCHR \nsrc = %s\n",s2);
	printf("%s\n", ft_memchr(s2, '4', 9));
	printf("TEMOIN :\n%s\n", memchr(s2, '4', 9));
/*
ß
// Memset
	printf("\n>> MEMSET \ns : %s\n'a' - 3\n",s);
	printf("%s\n",ft_memset(s, 'a', 3));
	printf("TEMOIN :\n%s\n",memset(s2, 'a', 3));

// Memccpy
	printf("\n>> MEMcCPY \nsrc = %s\ndest = %s\n'4' - 5\n",s, dest);
	printf("%s\n", ft_memccpy(dest, s, '4', 4));
	printf("TEMOIN :\n%s\n", memccpy(dest2, s2, '4', 4));

// Memcpy
	printf("\n>> MEMCPY \nsrc = %s\ndest = %s\n",s, dest);
	printf(">%s\n", ft_memcpy("NULL", "NULL", 0));
	printf("\nsrc2 = %s\ndest2 = %s\n6\n",s2, dest2);
	printf("TEMOIN :\n%s\n", memcpy("NULL", "NULL", 0));

// Memcmp
	printf("\n>> MEMCMP \nsrc = %s\ndest = %s\n6\n",s, dest);
	printf("%d\n", ft_memcmp(dest, s, 3));
	printf("TEMOIN :\n%d\n", memcmp(dest2, s2, 3));

// Bzero
	printf("\n>>BZERO \n%s\n",s);
	ft_bzero(s, 3);
	while (i < 6)
	{
		printf("%c",s[i]); 
		i++;
	}
	printf("\n");
	bzero(s2, 3);
	i = 0;
	while (i < 6)
	{
		printf("%c",s[i]); 
		i++;
	}


	CALLOOOOOOOOOOOOC
	
    (void)argc;
    // This pointer will hold the 
    // base address of the block created 
    int* ptr; 
    int n, i = 0; 
  
    // Get the number of elements for the array 
    n = atoi(argv[1]); 
    printf("Enter number of elements: %d\n", n); 
  
    // Dynamically allocate memory using calloc() 
    ptr = (int*)ft_calloc(n, sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) 
	{ 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
	
    else { 
		// Memory has been successfully allocated 
        printf("Memory successfully allocated using calloc.\n"); 
  
        // Get the elements of the array 
		for (i = 0; i < n; ++i) 
		{ 
			ptr[i] = i + 1; 
		} 
  
    	// Print the elements of the array 
    	printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) 
		{ 
			printf("%d, ", ptr[i]); 
		} 
	}
    return 0; 
} 

	return(0);

*/
}

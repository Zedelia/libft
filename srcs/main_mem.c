#include "../includes/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>

int        main(void)
{

	char dest[40];

// MEMMOVE------------------------------
	printf("\n--------------------->> MeMMOVE <<---------------------\n\n");
	
	printf("[everybody do the swap] | [          ](10) | 3\n");
	printf("[%s]\n", ft_memmove(dest, "everybody do the swap", 3));
	printf("[%s] - T\n\n\n", memmove(dest, "everybody do the swap", 3));
	
	ft_bzero(dest, 39);
	printf("[everybody do the swap] | [           ] | 30 \n");
	printf("[%s]\n",ft_memmove(dest, "everybody do the swap", 30));
	printf("[%s] - T\n\n\n", memmove(dest, "everybody do the swap", 30));

	ft_bzero(dest, 39);
	printf("[everybody do the swap] | [           ] | 0 \n");
	printf("[%s]\n",ft_memmove(dest, "everybody do the swap", 0));
	printf("[%s] - T\n\n\n", memmove(dest, "everybody do the swap", 0));

	printf("0 | 0 | 3\n");
	printf("[%s]\n",ft_memmove(0, 0, 3));
	printf("[%s] - T\n", memmove(0, 0, 3));

// MEMCHR------------------------------
	printf("\n--------------------->> MEMCHR <<---------------------\n\n");

	printf("[c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!] | [p] | 100\n");
	printf("[%s]\n", ft_memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 100));
	printf("[%s] - T\n\n\n", memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 100));;

	printf("[c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!] | [p] | 35\n");
	printf("[%s]\n", ft_memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 35));
	printf("[%s] - T\n\n\n", memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 35));;

	printf("[c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!] | [p] | 10\n");
	printf("[%s]\n", ft_memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 10));
	printf("[%s] - T\n\n\n", memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'p', 10));;

	printf("[c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!] | [x] | 50\n");
	printf("[%s]\n", ft_memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'x', 50));
	printf("[%s] - T\n\n\n", memchr("c'est quand que tu vas mettre des paillettes dans ma vie kevin ?!", 'x', 50));;


// MEMSET------------------------------
	printf("\n--------------------->> MEMSET<<---------------------\n\n");

	ft_bzero(dest, 39);
	printf("[%s] | [a] | 3 \n", dest);
	printf("[%s]\n",ft_memset(dest, 'a', 3));
	printf("[%s]\n\n\n", memset(dest, 'a', 3));

	ft_bzero(dest, 39);
	printf("[%s] | [a] | 39\n", dest);
	printf("[%s]\n",ft_memset(dest, 'a', 39));
	printf("[%s]\n\n\n", memset(dest, 'a', 39));

	printf("[%s] | [-] | 0 \n", dest);
	printf("[%s]\n",ft_memset(dest, '-', 0));
	printf("[%s]\n\n\n", memset(dest, '-', 0));

	printf("[%s] | [\\0] | 10 \n", dest);
	printf("[%s]\n",ft_memset(dest, '\0', 10));
	printf("[%s]\n\n\n", memset(dest, '\0', 10));

// MEMCCPY------------------------------
	printf("\n--------------------->> MEM C CPY<<---------------------\n\n");

	ft_bzero(dest, 39);
	printf("[mangez des pommes] | [o] | 5\n");
	printf("[%s] - [%s]\n", ft_memccpy(dest, "mangez des pommes", 'o', 5), dest);
	ft_bzero(dest, 39);
	memccpy(dest, "mangez des pommes", 'o', 5);
	printf("[(null)] - [%s] - T\n\n\n", dest);

	ft_bzero(dest, 39);
	printf("[mangez des pommes] | [o] | 20\n");
	printf("[%s] - [%s]\n", ft_memccpy(dest, "mangez des pommes", 'o', 20), dest);
	ft_bzero(dest, 39);
	memccpy(dest, "mangez des pommes", 'o', 20);
	printf("[] - [%s] - T\n\n\n", dest);

	ft_bzero(dest, 39);
	printf("[mangez des pommes] | [m] | 15\n");
	printf("[%s] - [%s]\n", ft_memccpy(dest, "mangez des pommes", 'm', 15), dest );
	ft_bzero(dest, 39);
	memccpy(dest, "mangez des pommes", 'm', 15);
	printf("[%s] - [%s] - T\n\n\n",	memccpy(dest, "mangez des pommes", 'm', 15), dest);

	ft_bzero(dest, 39);
	printf("[mangez des pommes------------------] | [\\0] | 39\n");
	printf("[%s] - [%s]\n", ft_memccpy(dest, "mangez des pommes                     ", 0, 39), dest);
	ft_bzero(dest, 39);
	printf("[%s] - [%s] - T\n\n\n",	memccpy(dest, "mangez des pommes                     ", 0, 39), dest);


// MEMCCPY------------------------------
	printf("\n--------------------->> MEMCPY<<---------------------\n\n");

	ft_bzero(dest, 39);
	printf("[mangez des pommes] | [%s] | 20\n", dest);
	printf("[%s]\n", ft_memcpy(dest, "mangez des pommes",  20));
	ft_bzero(dest, 39);
	printf("[%s] - T\n\n\n", memcpy(dest, "mangez des pommes",  20));

	ft_bzero(dest, 39);
	printf("[----------------] | [%s] | 2\n", dest);
	printf("[%s]\n", ft_memcpy(dest, "-----------------",  2));
	ft_bzero(dest, 39);
	printf("[%s] - T\n\n\n", memcpy(dest, "-----------------",  2));
/*
	ft_bzero(dest, 39); 
	printf("[----------------] | [%s] - 0\n", dest);
	printf("[%s]\n", ft_memcpy(dest, "-----------------",  0));
	ft_bzero(dest, 41);
	printf("[%s] - T\n\n\n", memcpy(dest, "-----------------",  0));

	ft_bzero(dest, 39);
	printf("[\\0] | [%s] - 0\n", dest);
	printf("[%s]\n", ft_memcpy(dest, 0,  0));
	ft_bzero(dest, 39);
	printf("[%s] - T\n\n\n", memcpy(dest, 0,  0));
*/
	ft_bzero(dest, 39);
	printf("[&H20] | [%s] | 20\n", dest);
	printf("[%s]\n", ft_memcpy(dest, "&H20", 20));
	ft_bzero(dest, 39);
	printf("[%s] - T\n\n\n", memcpy(dest, "&H20",  20));

	


// MEMCMP------------------------------
	printf("\n--------------------->> MEMCMP<<---------------------\n\n");

	printf("[&H20] | [%s] - 20\n", dest);
	printf("[%d]\n", ft_memcmp(dest, "&H20", 20));
	printf("[%d] - T\n\n\n", memcmp(dest, "&H20",  20));

	ft_bzero(dest, 39);
	printf("[&H20] | [%s] - 20\n", dest);
	printf("[%d]\n", ft_memcmp(dest, "&H20", 20));
	printf("[%d] - T\n\n\n", memcmp(dest, "&H20",  20));

	ft_memcpy(dest, "&H20", 20);
	printf("[*******] | [%s] - 5\n", dest);
	printf("[%d]\n", ft_memcmp(dest, "*******", 5));
	printf("[%d] - T\n\n\n", memcmp(dest, "*******", 5));

	printf("[&H5O] | [%s] - 1\n", dest);
	printf("[%d]\n", ft_memcmp(dest, "&H5O", 1));
	printf("[%d] - T\n\n\n", memcmp(dest, "&H5O", 1));


// BZERO------------------------------
	printf("\n--------------------->> BEZERO <<---------------------\n\n");
	
	int i = 0;
	printf("[%s] | 2\n",dest);
	ft_bzero(dest, 2);
	while (i < 4)
	{
		printf("[%c]\n",dest[i]); 
		i++;
	}
	printf("\n\n\n");

	memcpy(dest, "---------------------------------",  20);
	printf("[%s] | 10 \n",dest);
	bzero(dest, 10);
	i = 0;
	while (i < 20)
	{
		printf("[%c]\n",dest[i]); 
		i++;
	}

// CALLOC------------------------------
	printf("\n--------------------->> CALLOC <<---------------------\n\n");
	
      // This pointer will hold the 
    // base address of the block created 
    int* ptr; 
    int n = 0;
	i = 0; 
  
    // Get the number of elements for the array 
    n = 30; 
    printf("Number of elements: %d\n", n); 
  
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
        printf("Memory successfully allocated using calloc. Congratulation ! You're a genius !\n"); 
  
        // Get the elements of the array 
		for (i = 0; i < n; ++i) 
		{ 
			ptr[i] = i + 1; 
		} 
  
    	// Print the elements of the array 
    	printf("\nThe elements of the array are:\n"); 
		for (i = 0; i < n; ++i) 
		{ 
			printf("%d, ", ptr[i]); 
		} 
	printf("\n\n\n");
	}
    return 0; 
}

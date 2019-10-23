#include "libft.h"

int        main(void)
{
//	char  s[30] = "aaaaaaaaaaaaa";


// ISALPHA
	printf("\n>> ISALPHA \n");
	printf(">101\n%d\n", ft_isalpha(101));
	printf("TEMOIN %d\n", isalpha(101));
	printf(">50\n%d\n", ft_isalpha(50));
	printf("TEMOIN %d\n", isalpha(50));
	printf(">172\n%d\n", ft_isalpha(172));
	printf("TEMOIN %d\n\n", isalpha(172));

// ISDIGIT
	printf("\n>> ISDIGIT \n");
	printf("50\n%d\n", ft_isdigit(50));
	printf("TEMOIN %d\n", isdigit(50));
	printf("110\n%d\n", ft_isdigit(110));
	printf("TEMOIN %d\n", isdigit(110));

// ISALUM
	printf("\n>> ISALNUM \n");
	printf(">97\n%d\n", ft_isalnum(97));
	printf("TEMOIN %d\n", isalnum(97));
	printf(">12\n%d\n", ft_isalnum(12));
	printf("TEMOIN %d\n", isalnum(12));

// ISASCII
	printf("\n>> ISASCII \n");
	printf(">123\n%d\n", ft_isascii(123));
	printf("TEMOIN %d\n", isascii(123));
	printf(">330\n%d\n", ft_isascii(330));
	printf("TEMOIN %d\n", isascii(330));

// ISPRINT
	printf("\n>> ISPRINT \n");
	printf(">56\n%d\n", ft_isprint(56));
	printf("TEMOIN %d\n", isprint(56));
	printf(">128\n%d\n", ft_isprint(128));
	printf("TEMOIN %d\n", isprint(128));

// TOUPPER
	printf("\n>> TOUPPER \n");
	printf(">97\n%d\n", ft_toupper(97));
	printf("TEMOIN %d\n", toupper(97));
	printf(">67\n%d\n", ft_toupper(67));
	printf("TEMOIN %d\n", toupper(67));

// TOLOWER
	printf("\n>> TOLOWER \n");
	printf(">67\n%d\n", ft_tolower(67));
	printf("TEMOIN %d\n", tolower(67));
	printf(">100\n%d\n", ft_tolower(100));
	printf("TEMOIN %d\n", tolower(100));


	return(0);
}
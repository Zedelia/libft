#include "libft.h"

int        main(int argc, char **argv)
{
	(void)argc;

	// ATOI------------------------------
	printf("\n--------------------->> ATOI <<---------------------\n\n");
    const char  *s = "-2147483648";
    const char  *s2 = "2147483647";

	printf("Let's try the max and min [%s] & [%s]\n", s, s2);
    printf("[%d]\n[%d] was waited\n", ft_atoi(s), atoi(s));
    printf("[%d]\n[%d] was waited\n------------\n", ft_atoi(s2), atoi(s2));
        
	// PUTCHAR_FD------------------------------
	printf("\n--------------------->> FD <<---------------------\n\n");

	int fd;
	char *string = "I am a genius !";
	printf("we're going to use the string [%s] followed by [-]\nDo not forget to argv 'file'\n\n", string);
	
    fd = open(argv[1], O_RDWR);
    if (fd == -1)
		return (0);
    ft_putchar_fd(string[0], fd);
	ft_putchar_fd('-', fd);

	// PUTNBR_FD
	ft_putnbr_fd(42, fd);
	ft_putchar_fd('-', fd);
     
	// PUTSTR_FD
	ft_putstr_fd(string, fd);
	ft_putchar_fd('-', fd);
    
	// PUTENDL_FD
	ft_putendl_fd(string, fd);
	ft_putchar_fd('-', fd);

	
	return(0);

}
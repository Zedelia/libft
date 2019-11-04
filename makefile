NAME = libft.a

INCLUDES = libft

NAME_STR = prog

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -g3 -fsanitize=address
COMP := ${CC} ${CFLAGS} -I ${INCLUDES}

SRCS = ft_atoi \
	ft_bzero \
	ft_calloc \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_itoa \
	ft_memccpy \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
	ft_putchar_fd \
	ft_putchar \
	ft_putnbr_fd \
	ft_putnbr \
	ft_putstr_fd \
	ft_putstr \
	ft_putendl_fd \
	ft_split \
	ft_strchr \
	ft_strdup \
	ft_strjoin \
	ft_strlen \
	ft_strmapi \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_strtrim \
	ft_substr \
	ft_tolower \
	ft_toupper \
	ft_strcat \
	ft_strlcat \
	ft_strcpy \
	ft_strlcpy \
	ft_memdel \

SRCS_BONUS = ft_lstnew_bonus \
	ft_lstadd_front_bonus \
	ft_lstsize_bonus \
	ft_lstlast_bonus \
	ft_lstadd_back_bonus \
	ft_lstdelone_bonus \
	ft_lstiter_bonus \
	ft_lstclear_bonus \
	ft_lstmap_bonus \


	
INCLUDES := $(patsubst %,%.h,${INCLUDES})

# Same binary compiled multiple times after a modification when using this rule : 
# to be tested : 
#		replace $(patsubst %,srcs/%.c,${SRCS}) with $(patsubst %,srcs/%.c,${FILES})
FILES = $(shell ls srcs | grep .c | cut -d "." -f 1)
# -- 
SRCS := $(patsubst %,%.c,${SRCS})
OBJ := ${SRCS:.c=.o}

# not using this rule because of issue above
#FILES_BONUS = $(shell ls srcs/_bonus | grep .c | cut -d "." -f 1)
# -- 
SRCS_BONUS := $(patsubst %,%.c,${SRCS_BONUS})
OBJ_BONUS := ${SRCS:.c=.o} ${SRCS_BONUS:.c=.o}



all : ${NAME}
		@echo "\n>> La librairie Libft.a a bien ete cree." 
		
$(NAME):${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}
		
bonus: ${OBJ_BONUS}
		ar rc ${NAME} ${OBJ_BONUS}
		@echo "\n>> La librairie Libft.a a bien ete mise a jour"

%.o : %.c $(INCLUDES) 
	$(CC) $(CFLAGS)   -c $< -o $@


clean:
	rm -f ${OBJ_BONUS}

fclean: clean
	rm -f ${NAME}

norm:
	norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_BONUS} ${INCLUDES}

re: fclean all

.PHONY: norm all re fclean clean progs bonus
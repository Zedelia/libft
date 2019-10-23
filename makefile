NAME_ISTYPE = pistype
NAME_MEM = pmem
NAME_PRINT = pprint
NAME_PART2 = ppart2
NAME_STR = pstr
NAME_LIST = plist

MAIN_STR = main_str.c
MAIN_ISTYPE = main_istype_to.c
MAIN_MEM = main_mem.c
MAIN_PRINT = main_print.c
MAIN_LIST = main_list.c
MAIN_PART2 = main_part2.c

NAME = libft.a

INCLUDES = libft

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
		

${NAME_ISTYPE}:${OBJ} ${MAIN_ISTYPE}
		${COMP} -o ${NAME_ISTYPE} ${OBJ} ${MAIN_ISTYPE}

${NAME_MEM}:${OBJ} ${MAIN_MEM}
		${COMP} -o ${NAME_MEM} ${OBJ} ${MAIN_MEM}

${NAME_PRINT}:${OBJ} ${MAIN_PRINT}
		${COMP} -o ${NAME_PRINT} ${OBJ} ${MAIN_PRINT}

${NAME_PART2}:${OBJ} ${MAIN_PART2}
		${COMP} -o ${NAME_PART2} ${OBJ} ${MAIN_PART2}

${NAME_LIST}: ${OBJ_BONUS} ${MAIN_LIST}
		${COMP} -o ${NAME_LIST} ${OBJ_BONUS} ${MAIN_LIST}

${NAME_STR}:${OBJ} ${MAIN_STR}
		${COMP} -o ${NAME_STR} ${OBJ} ${MAIN_STR}

progs: ${NAME_LIST} ${NAME_PART2} ${NAME_PRINT} ${NAME_MEM} ${NAME_ISTYPE} ${NAME_STR}
	@echo "\n>> Congrats ! You're a genius ! \nLes programmes ont bien ete crees"

str: ${NAME_STR}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests STR ont bien ete crees"
part2: ${NAME_PART2}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests PART2 ont bien ete crees"	
list: ${NAME_LIST}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests LIST ont bien ete crees"	
print: ${NAME_PRINT}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests PRINT ont bien ete crees"
mem: ${NAME_MEM}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests MEM ont bien ete crees"
type: ${NAME_ISTYPE}
	@echo "\n>> Congrats ! You're a genius ! \nLes tests TYPES ont bien ete crees"


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
	rm -f ${NAME_LIST} ${NAME_PART2} ${NAME_PRINT} ${NAME_MEM} ${NAME_ISTYPE} ${NAME_STR}

norm:
	norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_BONUS} ${INCLUDES}

re: fclean all

.PHONY: norm all re fclean clean progs bonus
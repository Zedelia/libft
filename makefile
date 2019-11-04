NAME_ISTYPE = pistype
NAME_MEM = pmem
NAME_PRINT = pprint
NAME_MEMORY = pcalloc
NAME_BASE = pbase
NAME_STR = pstr
NAME_LIST = plist

MAIN_STR = main_str.c
MAIN_ISTYPE = main_istype_to.c
MAIN_MEM = main_mem.c
MAIN_PRINT = main_print.c
MAIN_MEMORY = main_memory.c
MAIN_BASE = main_base.c
MAIN_LIST = main_list.c

INCLUDES = libft

NAME = libft.a

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

SRCS_BONUS = ft_lstnew_bonus \
	ft_lstadd_front_bonus \
	ft_lstsize_bonus \
	ft_lstlast_bonus \
	ft_lstadd_back_bonus \
	ft_lstdelone_bonus \
	ft_lstiter_bonus \
	ft_lstmap_bonus \
	
INCLUDES := $(patsubst %,includes/%.h,${INCLUDES})

# Same binary compiled multiple times after a modification when using this rule : 
# to be tested : 
#		replace $(patsubst %,srcs/%.c,${SRCS}) with $(patsubst %,srcs/%.c,${FILES})
#FILES = $(shell ls srcs | grep .c | cut -d "." -f 1)
# -- 
SRCS := $(patsubst %,srcs/%.c,${SRCS})
OBJ := ${SRCS:.c=.o}

# not using this rule because of issue above
#FILES_BONUS = $(shell ls srcs/_bonus | grep .c | cut -d "." -f 1)
# -- 
SRCS_BONUS := $(patsubst %,srcs/%.c,${SRCS_BONUS})
OBJ_BONUS := ${SRCS:.c=.o} ${SRCS_BONUS:.c=.o}

NAME_BONUS = libft_bonus
		
${NAME}: ${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

${NAME_BONUS}:${OBJ_BONUS}
		ar rc ${NAME} ${OBJ_BONUS}
		ranlib ${NAME}
		
all : ${NAME}
		@echo "\n>> La librairie Libft.a a bien ete cree." 

bonus: ${NAME_BONUS}
		@echo "\n>> La librairie Libft.a a bien ete mise a jour"


${NAME_STR}:${OBJ} ${MAIN_STR}
		${COMP} -o ${NAME_STR} ${OBJ} ${MAIN_STR}

${NAME_ISTYPE}:${OBJ} ${MAIN_ISTYPE}
		${COMP} -o ${NAME_ISTYPE} ${OBJ} ${MAIN_ISTYPE}

${NAME_MEM}:${OBJ} ${MAIN_MEM}
		${COMP} -o ${NAME_MEM} ${OBJ} ${MAIN_MEM}

${NAME_PRINT}:${OBJ} ${MAIN_PRINT}
		${COMP} -o ${NAME_PRINT} ${OBJ} ${MAIN_PRINT}

${NAME_MEMORY}:${OBJ} ${MAIN_MEMORY}
		${COMP} -o ${NAME_MEMORY} ${OBJ} ${MAIN_MEMORY}

${NAME_BASE}:${OBJ} ${MAIN_BASE}
		${COMP} -o ${NAME_BASE} ${OBJ} ${MAIN_BASE}

${NAME_LIST}: ${OBJ_BONUS} ${MAIN_LIST}
		${COMP} -o ${NAME_LIST} ${OBJ_BONUS} ${MAIN_LIST}

progs: ${NAME_STR} ${NAME_LIST} ${NAME_BASE} ${NAME_MEMORY} ${NAME_PRINT} ${NAME_MEM} ${NAME_ISTYPE}
	@echo "\n>> Congrats ! You're a genius ! \nLes programmes ont bien ete crees"

%.o : %.c $(INCLUDES) 
	$(CC) $(CFLAGS) -I $(INCLUDES)  -c  -o $@ $<

clean:
	rm -f ${OBJ_BONUS}

fclean: clean
	rm -f ${NAME_MEM} ${NAME_ISTYPE} ${NAME_STR} ${NAME_LIST} ${NAME_BASE} ${NAME_MEMORY} ${NAME_PRINT}
	rm -f ${NAME}

norm:
	norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_BONUS}

re: fclean all

.PHONY: norm all re fclean clean progs bonus
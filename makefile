NAME_ISTYPE = pistype
NAME_MEM = pmem
NAME_PRINT = pprint
NAME_MEMORY = pcalloc
NAME_BASE = pbase
NAME_STR = pstr
NAME_LIST = plist

MAIN_STR = tests/main_str.c
MAIN_ISTYPE = tests/main_istype_to.c
MAIN_MEM = tests/main_mem.c
MAIN_PRINT = tests/main_print.c
MAIN_MEMORY = tests/main_memory.c
MAIN_BASE = tests/main_base.c
MAIN_LIST = tests/main_list.c

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
	ft_memdel \
	ft_isincharset \
	ft_strmove \
	ft_strndup \
	ft_utoa \
	ft_ltoabase \
	ft_strsub \
	ft_strncpy \
	ft_strspn \
	ft_floor \
	ft_fmod \
	get_next_line_utils \
	get_next_line

SRCS_BONUS = ft_lstnew_bonus \
	ft_lstadd_front_bonus \
	ft_lstsize_bonus \
	ft_lstlast_bonus \
	ft_lstadd_back_bonus \
	ft_lstdelone_bonus \
	ft_lstiter_bonus \
	ft_lstmap_bonus \
	ft_lstclear_bonus \

INCLUDES := $(patsubst %,includes/%.h,${INCLUDES})

NO_COLOR = \x1b[0m
OK_COLOR = \x1b[32;01m
ERROR_COLOR = \x1b[31;01m
WARN_COLOR = \x1b[33;01m
_PURPLE = \x1b[35m

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

GREY = \x1b[30m
RED = \x1b[31m
GREEN = \x1b[32m
YELLOW = \x1b[33m
BLUE = \x1b[34m
PURPLE = \x1b[35m
CYAN = \x1b[36m
WHITE = \x1b[37m
END = \x1b[0m
ERASE = \033[2K\r

NAME_BONUS = libft_bonus

${NAME}: ${OBJ}
		@ar rc ${NAME} ${OBJ}
		@ranlib ${NAME}

${NAME_BONUS}:${OBJ_BONUS}
		@ar rcs ${NAME} ${OBJ_BONUS}
		@ranlib ${NAME}
		@echo "$(ERASE)$(GREEN)[SUCCESS] libft.a$(END)"

all : ${NAME_BONUS}
		@echo "$(ERASE)$(GREEN)[SUCCESS] libft.a$(END)"

bonus: ${NAME_BONUS}
		@printf "$(ERASE)$(BLUE)> Compilation :$(END)$(PURPLE) $<$(END)"

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
	@$(CC) $(CFLAGS) -I $(INCLUDES)  -c  -o $@ $<
	@printf "$(ERASE)$(BLUE)> Compilation :$(END) $<"

clean:
	@rm -f ${OBJ_BONUS}
	@printf "$(BLUE)> Deleted : $(RED)libft .obj$(END)\n"

fclean: clean
	@rm -f ${NAME_MEM} ${NAME_ISTYPE} ${NAME_STR} ${NAME_LIST} ${NAME_BASE} ${NAME_MEMORY} ${NAME_PRINT}
	@printf "$(BLUE)> Deleted : $(RED)${NAME}$(END)\n"
	@rm -f ${NAME}

norm:
	norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_BONUS}

re: fclean all

.PHONY: norm all re fclean clean progs bonus

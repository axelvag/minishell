SRCS = ft_atoi.c	ft_isascii.c	ft_memcmp.c	ft_putendl_fd.c\
	ft_strdup.c	ft_strlen.c	ft_substr.c	ft_bzero.c	ft_isdigit.c\
	ft_memcpy.c	ft_putnbr_fd.c	ft_striteri.c	ft_strmapi.c\
	ft_tolower.c	ft_calloc.c	ft_isprint.c	ft_memmove.c\
	ft_putstr_fd.c	ft_strjoin.c	ft_strnstr.c	ft_toupper.c\
	ft_isalnum.c	ft_itoa.c	ft_memset.c	ft_split.c	ft_strlcat.c\
	ft_strrchr.c	ft_isalpha.c	ft_memchr.c	ft_putchar_fd.c\
	ft_strchr.c	ft_strlcpy.c	ft_strtrim.c	ft_strncmp.c	ft_strcmp.c\
	get_next_line.c	ft_lstsize.c	ft_lstadd_front.c	ft_lstnew.c	ft_lstlast.c\
	ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c\
	ft_lstmap.c	ft_printf/ft_printf.c ft_printf/write_functions_hex.c\
	ft_printf/write_functions_nbr.c	ft_printf/write_functions_str.c

OBJS = $(SRCS:%.c=$(BUILD_DIR)%.o)

BUILD_DIR	=	../build/

CC = cc

HEAD = libft.h

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

LIB = ar rc

RM = rm -f

.PHONY: all clean fclean re bonus

$(BUILD_DIR)%.o:	%.c ${HEAD} Makefile
	@mkdir -p $(@D)
	${CC} ${FLAGS} -include ${HEAD} -c $< -o $@

all:	${NAME}	Makefile

${NAME}:	${OBJS} Makefile
	${LIB} ${NAME} ${OBJS} 

clean:
	${RM} ${OBJS} ${OBJS_BONUS} ${OBJS_PRINTF}

fclean:	clean
	${RM} ${NAME}

re:	fclean	all

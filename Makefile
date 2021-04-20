SRCS	= ft_isalnum.c \
			ft_memcpy.c \
			ft_strdup.c \
			ft_strtrim.c \
			ft_isalpha.c \
			ft_memmove.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_isascii.c \
			ft_memset.c \
			ft_strlcat.c \
			ft_tolower.c \
			ft_isdigit.c \
			ft_putchar_fd.c \
			ft_strlcpy.c \
			ft_toupper.c \
			ft_isprint.c \
			ft_putendl.c \
			ft_strlen.c \
			ft_itoa.c \
			ft_putnbr_ft.c \
			ft_strmapi.c \
			ft_atoi.c \
			ft_memccpy.c \
			ft_putstr_fd.c \
			ft_strncmp.c \
			ft_bzero.c \
			ft_memchr.c \
			ft_split.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_memcmp.c \
			ft_strchr.c \
			ft_strrchr.c 

HEADER	= libft.h

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rc
LIBR	= ranlib



${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}
			${LIBR} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
SRCS	=	ft_isalnum.c \
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
			ft_putendl_fd.c \
			ft_strlen.c \
			ft_itoa.c \
			ft_putnbr_fd.c \
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

SRCS_B	=	ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstdelone.c



OBJS	= ${SRCS:.c=.o}
OBJS_B	= ${SRCS_B:.c=.o}


NAME	= libft.a

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rcs




$(NAME):	${OBJS}
			${LIBC} ${NAME} ${OBJS}


all:		$(NAME)


.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus:		${OBJS_B}
			${LIBC} ${NAME} ${OBJS_B}


clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
SRCS	= superkrutoeimya.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

all:	${OBJS}
		gcc -Wall -Werror -Wextra -o ${NAME} ${OBJS}

clean:
		rm ${OBJS}

fclean:	clean
		rm ${NAME}

.PHONY:	all clean fclean

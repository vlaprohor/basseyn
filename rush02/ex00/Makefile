SRCS	=

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

GCC		= gcc

FLAGS	= -Wall -Werror -Wextra

all:	${NAME}

${NAME}:${OBJS}
		@${GCC} ${FLAGS} -o ${NAME} ${OBJS}

%.o:	%.c
		@${GCC} ${FLAGS} -c $< -o $@

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f ${NAME}

.PHONY:	all clean fclean

NAME = megaphone
CFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}
CC = g++

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS} 
	
fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
NAME = megaphone
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

%.o:%.cpp
		${CC} ${CFLAGS} -c $^ -o $@

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS} 
	
fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
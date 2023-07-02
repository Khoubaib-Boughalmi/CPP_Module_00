NAME = phoneBook
CC = g++
CFLAGS = -std=c++98  -Wall -Werror -Wextra

SRCS = main.cpp \
		phoneBook.cpp \
		contact.cpp
OBJS = ${SRCS:.cpp=.o}

${NAME} :	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean:	
		${RM} ${OBJS} 
	
fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re


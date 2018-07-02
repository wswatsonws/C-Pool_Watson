SRC	= my_cat.cpp	

CC=g++

OBJ	=	$(SRC:.cpp=.o)

NAME	=	my_cat

CFLAGS	+=	-W -Wall -Wextra -Werror

all:	$(NAME)

${NAME}:	$(OBJ)
	$(CC) -W -Wall -Werror -o $(NAME) $(OBJ)
	
clean:
	rm -f *.o

fclean:clean
			rm -f $(NAME)

re:	fclean all



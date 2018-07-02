SRC	= my_convert_temp.cpp	

CC=g++

OBJ	=	$(SRC:.cpp=.o)

NAME	=	my_convert_temp

all:	$(NAME)

${NAME}:	$(OBJ)
	$(CC) -W -Wall -Werror -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean:clean
			rm -f $(NAME)

re:	fclean all



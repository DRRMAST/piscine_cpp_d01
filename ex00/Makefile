SRC	=	my_cat.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME 	=	my_cat

all:	$(NAME)
 
$(NAME):	$(OBJ)
	g++  -Wall -Wextra -Werror -o $(NAME) $(OBJ) 
	
clean:
	rm -f *.o
	rm -f *.out

fclean: clean
	rm -f $(NAME)

re:	fclean all

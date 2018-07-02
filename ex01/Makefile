SRC	=	my_convert_temp.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME 	=	my_convert_temp

all:	$(NAME)
 
$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) 
	
clean:
	rm -f *.o
	rm -f *.out

fclean: clean
	rm -f $(NAME)

re:	fclean all

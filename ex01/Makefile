$(NAME) = ex01
$(G++) = g++
$(CPPFLAGS) = -Wall -Wextra -Werror -std=c++98
$(SRC) = 
$(OBJ) = $(SRC:.cpp=.o)

all : $(NAME)

$(OBJ) : $(SRC)
	$(G++) $(CPPFLAGS) -c $(SRC) -o $(OBJ)

$(NAME) : $(OBJ)
	$(G++) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

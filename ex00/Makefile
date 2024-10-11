NAME = ex00
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
G++ = g++
SRC = ./megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(OBJ) : $(SRC)
	$(G++) $(CPPFLAGS) -c $(SRC) -o $(OBJ)

$(NAME) :$(OBJ)
	$(G++) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

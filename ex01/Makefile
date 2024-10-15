NAME = ex01
G++ = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Contact/Contact.cpp ./PhoneBook/PhoneBook.cpp ./main.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(G++) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(G++) $(CPPFLAGS) $^ -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

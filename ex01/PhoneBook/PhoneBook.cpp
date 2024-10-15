#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), to_replace(0){
	
}

void	PhoneBook::add_user(Contact& contact){
	if (count < 8) list[count++] = contact;
	else{
		list[to_replace] = contact;
		to_replace = to_replace % 8 + 1;
	}
}


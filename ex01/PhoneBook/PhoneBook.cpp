#include "PhoneBook.hpp"

#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : count(0), to_replace(0){
	
}

int		PhoneBook::get_nbr(){
	return this->count;
}

void	PhoneBook::add_user(Contact& contact){
	if (count < 8) list[count++] = contact;
	else{
		list[to_replace] = contact;
		to_replace = to_replace % 8 + 1;
	}
}

bool	PhoneBook::one_contact(int n){
	std::string str;
	
	if (n > this->count || n <= 0)
		return false;
	else{
		std::cout << list[n - 1].get_last_name() << std::endl;
		std::cout << list[n - 1].get_first_name() << std::endl;
		std::cout << list[n - 1].get_nickname() << std::endl;
		std::cout << list[n - 1].get_phone() << std::endl;
		std::cout << list[n - 1].get_darkest_secret() << std::endl;
	}
	return true;
}

void	PhoneBook::display_contact_list(){
	for (int i = 0; i < this->count;  i++){
		std::string	str;
		std::ostringstream oss;
		
		oss << (i + 1);
		std::cout << std::right << std::setw(10) << oss.str() << std::setfill(' ') << "|";		
		str = list[i].get_first_name();
		if (str.size() >= 10)
			str[9] = '.';
		std::cout << std::right << std::setw(10) << str << std::setfill(' ') << "|";
		str = list[i].get_last_name();
		if (str.size() >= 10)
			str[9] = '.';
		std::cout << std::right << std::setw(10) << str << std::setfill(' ') << "|";
		str = list[i].get_nickname();
		if (str.size() >= 10)
			str[9] = '.';
		std::cout << std::right << std::setw(10) << str << std::setfill(' ') << std::endl;
	}
}

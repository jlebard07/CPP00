#include "./PhoneBook/PhoneBook.hpp"

int main(){
	std::string str;
	PhoneBook dir;

	while (1)
	{
		std::cout << "Please enter a valid command : ";
		std::cin >> str;
		if (str == "ADD")
		{
			Contact new_contact;
			std::string	input;

			dir.add_user(new_contact);
			std::cin >> input;
			new_contact.set_first_name(input);
			std::cin >> input;
			new_contact.set_last_name(input);
		}
	}
}

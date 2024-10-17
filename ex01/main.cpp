#include "./PhoneBook/PhoneBook.hpp"

#include <iomanip>
#include <sstream>

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

			std::cout << "First name : ";
			std::cin >> input;
			new_contact.set_first_name(input);
			std::cout << "Last name : ";
			std::cin >> input;
			new_contact.set_last_name(input);
			std::cout << "Nickname : ";
			std::cin >> input;
			new_contact.set_nickname(input);
			std::cout << "Phone nb : ";
			std::cin >> input;
			new_contact.set_phone(input);
			std::cout << "Secret : ";
			std::cin >> input;
			new_contact.set_darkest_secret(input);
			dir.add_user(new_contact);
		}
		else if (str == "SEARCH")
		{
			std::string input_name;
			std::cout << std::right << std::setw(10) << "INDEX" << std::setfill(' ')
			<< "|" << std::right << std::setw(10) << "FIRST_NAME" << std::setfill(' ')
			<< "|" << std::right << std::setw(10) << "LAST_NAME" << std::setfill(' ')
			<< "|" << std::right << std::setw(10) << "NICKNAME" << std::setfill(' ')
			<< std::endl;
			dir.display_contact_list();
			while (1)
			{
				std::string input_index;
				int		index;
				int		ctrl;
				
				if (dir.get_nbr() == 0){
					std::cout << "No contact has been loaded." << std::endl;
					break ;
				}
				index = -1;
				ctrl = 0;
				if (ctrl == 0)
					std::cout << "Enter an index :";
				std::cin >> input_index;
				std::istringstream iss(input_index);
				if (index < 0 || !iss >> index || !iss.eof() || dir.one_contact(index) == 0){
					std::cout << "Please enter a valid index :";
					ctrl++;
				}
				else
					break ;
			}
		}
		else if (str == "EXIT")
			exit(EXIT_SUCCESS);
		else
			std::cout << str << " is not a valid command" << std::endl;
	}
}

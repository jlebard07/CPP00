#include "Contact.hpp"

std::string	Contact::get_first_name() const{
	return first_name.empty() ? "" : first_name;
}

std::string	Contact::get_last_name() const{
	return last_name.empty() ? "" : last_name;
}

std::string	Contact::get_nickname() const{
	return nickname.empty() ? "" : nickname;
}

std::string	Contact::get_phone() const{
	return phone_number.empty() ? "" : phone_number;
}

std::string	Contact::get_darkest_secret() const{
	return darkest_secret.empty() ? "" : darkest_secret;
}

void	Contact::set_first_name(std::string str){
	first_name = str;
}

void	Contact::set_last_name(std::string str){
	last_name = str;
}

void	Contact::set_darkest_secret(std::string str){
	darkest_secret = str;
}

void	Contact::set_nickname(std::string str){
	nickname = str;
}

void	Contact::set_phone(std::string str){
	phone_number = str;
}

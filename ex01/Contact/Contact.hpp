#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>


class Contact{
	public :
	std::string get_first_name()const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone() const;
	std::string	get_darkest_secret() const;
	void	set_first_name(std::string str);
	void	set_last_name(std::string str);
	void	set_nickname(std::string str);
	void	set_phone(std::string str);
	void	set_darkest_secret(std::string str);
	
	private :
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "../Contact/Contact.hpp"

class PhoneBook{
public :
	PhoneBook();
	void	add_user(Contact& contact);

private :
	int count, to_replace;
	Contact list[8];
};

#endif

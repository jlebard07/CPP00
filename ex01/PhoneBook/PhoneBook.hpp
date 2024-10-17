#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "../Contact/Contact.hpp"

class PhoneBook{
public :
	PhoneBook();
	int		get_nbr();
	void	add_user(Contact& contact);
	void	display_contact_list();
	bool	one_contact(int	n);

private :
	int count, to_replace;
	Contact list[8];
};

#endif

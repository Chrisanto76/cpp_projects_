#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include 	<iostream>
#include 	"contact.class.hpp"
# include	 <string>

#define color_one "\e[01;32m"
#define color_two "\e[01;33m"

class   Phonebook {

private:
	Contact _contacts[8];
	int		_index;
	int		_size;

public:
	Phonebook(void);
	 ~Phonebook(void);

	int		get_size(void) const;
	void	add_contact(std::string element[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
	void	display_all(void);
};


#endif
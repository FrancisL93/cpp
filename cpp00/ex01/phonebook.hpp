#ifndef CPP00_EX00_PHONEBOOK_H
#define CPP00_EX00_PHONEBOOK_H

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		
	public:
		Contact contact[8];
		int	n_contacts;

		void	new_contact( void );

		PhoneBook();
		~PhoneBook();
};

#endif
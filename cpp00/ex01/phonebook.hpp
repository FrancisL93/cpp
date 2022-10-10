#ifndef CPP00_EX00_PHONEBOOK_H
#define CPP00_EX00_PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	
public:
	Contact contact[8];
	int	n_contacts;
	void	new_contact() {
		static int	i = 0;
		static int	full = false;

		if (i == 8) {
			full = true;
			i = 0;
		}
		contact[i].create_contact(i, full);
		i++;
	}
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
	n_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook()
{

}

#endif
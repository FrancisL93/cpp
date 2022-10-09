#ifndef CPP00_EX00_PHONEBOOK_H
#define CPP00_EX00_PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	/* data */
public:
	Contact Contact;
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

#endif
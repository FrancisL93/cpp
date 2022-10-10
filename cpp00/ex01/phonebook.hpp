#ifndef CPP00_EX00_PHONEBOOK_H
#define CPP00_EX00_PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	
public:
	Contact contact[8];
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{

}

#endif
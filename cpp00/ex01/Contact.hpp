#ifndef CPP00_EX00_CONTACT_H
#define CPP00_EX00_CONTACT_H

#include "iostream"

std::string	get_first_name(void);
std::string	get_last_name(void);
std::string	get_nickname(void);
std::string	get_phone_number(void);
std::string	get_darkest_secret(void);

class Contact
{
private:
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	void	create_contact(int index, bool full) {
		std::cout << "\n\e[1;32mCreating a new contact for the PhoneBook!\e[0m\n\n";
		if (full)
			std::cout << "\e[1;31mPhoneBook full! New contact will erase contact #" << index + 1 << "\e[0m\n\n";
		first_name = get_first_name();
		last_name = get_last_name();
		nickname = get_nickname();
		phone_number = get_phone_number();
		darkest_secret = get_darkest_secret();
		std::cout << "\n\e[1;32mNew contact #" << index +1 << " successfully added!\e[0m\n\n";
		return ;
	}
	Contact();
	~Contact();
};

Contact::Contact(void)
{
}

Contact::~Contact()
{

}

#endif
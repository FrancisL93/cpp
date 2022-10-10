#ifndef CPP00_EX00_CONTACT_H
#define CPP00_EX00_CONTACT_H

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
	Contact(void);
	~Contact();
};

Contact::Contact(void)
{
	std::cout << "\n\e[1;32mCreating a new contact for the PhoneBook!\e[0m\n\n";
}

Contact::~Contact()
{

}

#endif
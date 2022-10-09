#ifndef CPP00_EX00_CONTACT_H
#define CPP00_EX00_CONTACT_H

std::string	first_name(void);
std::string	last_name(void);
std::string	nickname(void);
std::string	phone_number(void);
std::string	darkest_secret(void);

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;	
public:
	Contact(void);
	~Contact();
};

Contact::Contact(void)
{
	first_name = first_name();
	last_name = last_name();
	nickname = nickname();
	phone_number = phone_number();
	darkest_secret = darkest_secret();
	return ;
}

Contact::~Contact()
{

}

#endif
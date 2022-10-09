#ifndef CPP00_EX00_CONTACT_H
#define CPP00_EX00_CONTACT_H

class Contact
{
private:
	/* data */
public:
	Contact(/* args */);
	~Contact();
};

Contact::Contact(/* args */)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

#endif
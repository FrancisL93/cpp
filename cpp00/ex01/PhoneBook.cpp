#include "PhoneBook.hpp"

int	print_contact_info(PhoneBook phonebook, std::string input) {
	int	index = std::stoi(input);

	std::cout << input;
	if (index < 1 && index > phonebook.n_contacts)
		return (1);
	index -= 1;
	std::cout << "\n\e[1;32mContact #" << index + 1 << " :\e[0m\n";
	phonebook.contact[index].displayContact();
	return (0);
}

void	PhoneBook::new_contact( void ) {
	static int	i = 0;
	static int	full = false;

	if (i == 8) {
		full = true;
		i = 0;
	}
	contact[i].createContact(i, full);
	i++;
}

PhoneBook::PhoneBook()
{
	n_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook()
{

}

#include "PhoneBook.hpp"

void	print_informations(std::string str);

void	display_intro(void){
	std::cout << "\n\e[1;32mWelcome to the PhoneBook!\e[0m\n\n";
	std::cout << "Enter ADD to save anew contact\n";
	std::cout << "Enter SEARCH to display a specific contact\n";
	std::cout << "Enter EXIT to quit the PhoneBook\n\n";
}

int	display_contacts(PhoneBook phonebook) {
	std::cout << "\n\e[1;32m     Index|First Name| Last Name|  Nickname\e[0m\n";
	for (int index = 0; index < phonebook.n_contacts; index++) {
		print_informations(std::to_string(index + 1));
		std::cout << "|";
		phonebook.contact[index].displayContact();
	}
	if (phonebook.n_contacts == 0) {
		std::cout << "\e[1;31mPhoneBook is empty... Go add contacts!\e[0m\n";
		return (1);
	}
	return (0);
}

int	is_index(PhoneBook phonebook, std::string input) {
	int index;
	
	if (input.length() == 1 && std::isdigit(input[0]))
		index = std::stoi(input);
	else
		return (1);
	if (index > 0 && index <= phonebook.n_contacts) {
		phonebook.contact[index - 1].displayContactInfo();
		return (0);
	}
	else
		return (1);

}

void	search(PhoneBook phonebook){
	std::string	input;

	if (display_contacts(phonebook))
		return ;
	std::cout << "\nEnter contact's index to display contact's information (or RETURN to go back):  ";
	std::getline(std::cin, input);
	while (input != "RETURN" && !std::cin.eof()) {
		if (!is_index(phonebook, input))
			return ;
		std::cout << "\nEnter contact's index to display contact's information (or RETURN to go back):  ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		exit(0);
	return ;
}

int main(int argc, char **argv)
{
	PhoneBook phonebook;

    if (argc == 1 && argv)
    {
		display_intro();	
		std::string input;
		std::cout << "Type your command: ";
		std::getline(std::cin, input);
		while (input != "EXIT" && !std::cin.eof()) {
			if(input == "ADD") {
				phonebook.new_contact();
				if (phonebook.n_contacts < 8) {	
					phonebook.n_contacts++;
				}
			}
			else if (input == "SEARCH")
				search(phonebook);
			else
				std::cout << "\e[1;31mCommand invalid!\e[0m\nRe-";
			if (std::cin.eof())
				return (0);
			std::cout << "Type your command (ADD / SEARCH / EXIT): ";
			std::getline(std::cin, input);
		}
		if (std::cin.eof())
			return (0);
    }
	else
		std::cout << "\e[1;31mERROR: Execute ./phonebook without arguments!\e[0m\n";
	return (0);
}
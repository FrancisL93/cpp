#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	new_contact();

void	display_intro(void){
	std::cout << "\n\e[1;32mWelcome to the PhoneBook!\e[0m\n\n";
	std::cout << "Enter ADD to save anew contact\n";
	std::cout << "Enter SEARCH to display a specific contact\n";
	std::cout << "Enter EXIT to quit the PhoneBook\n\n";
}

int	display_contacts(PhoneBook phonebook) {
	for (int i = 0; i < phonebook.n_contacts; i++) {
		std::cout << "\n\e[1;32mContact #" << i + 1 << ":\e[0m\n";
		std::cout << "First Name: " << phonebook.contact[i].first_name << "\n";
		std::cout << "Last Name: " << phonebook.contact[i].last_name << "\n";
		std::cout << "Nickname: " << phonebook.contact[i].nickname << "\n";
		std::cout << "Phone Number: " << phonebook.contact[i].phone_number << "\n";
		std::cout << "Darkest Secret: " << phonebook.contact[i].darkest_secret << "\n";
	}
	if (phonebook.n_contacts == 0) {
		std::cout << "\e[1;31mPhoneBook is empty... Go add contacts!\e[0m\n";
		return (1);
	}
	return (0);
}

void	search(PhoneBook phonebook){
	std::string	input;

	if (display_contacts(phonebook))
		return ;
	std::cout << "\nEnter contact's index to display contact's information (or RETURN to go back):  ";
	std::getline(std::cin, input);
	while (input != "RETURN" && !std::cin.eof()) {
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
			std::cout << "Type your command: ";
			std::getline(std::cin, input);
		}
		if (std::cin.eof())
			return (0);
    }
	else
		std::cout << "\e[1;31mERROR: Execute ./phonebook without arguments!\e[0m\n";
	return (0);
}
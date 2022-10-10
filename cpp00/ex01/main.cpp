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

void	print_informations(std::string str) {
	int	len;
	
	len = str.length();
	for (int i = 0; i < 10 - len; i++) {
		std::cout << " ";
	}
	for(int j = 0; j < len; j++) {
		if (len > 10 && j == 9) {
			std::cout << ".";	
			break ;	
		}
		std::cout << str[j];
	}
}

int	display_contacts(PhoneBook phonebook) {
	std::cout << "\n\e[1;32m     Index|First Name| Last Name|  Nickname\e[0m\n";
	for (int index = 0; index < phonebook.n_contacts; index++) {
		print_informations(std::to_string(index + 1));
		std::cout << "|";
		print_informations(phonebook.contact[index].last_name);
		std::cout << "|";
		print_informations(phonebook.contact[index].nickname);
		std::cout << "|";
		print_informations(phonebook.contact[index].phone_number);
		std::cout << "\n";
	}
	if (phonebook.n_contacts == 0) {
		std::cout << "\e[1;31mPhoneBook is empty... Go add contacts!\e[0m\n";
		return (1);
	}
	return (0);
}

int	print_contact_info(PhoneBook phonebook, std::string input) {
	int	index = std::stoi(input);

	std::cout << input;
	if (index < 1 && index > phonebook.n_contacts)
		return (1);
	index -= 1;
	std::cout << "\n\e[1;32mContact #" << index + 1 << " :\e[0m\n";
	std::cout << "\e[1;34mFirst Name:\e[0m " << phonebook.contact[index].first_name << "\n";
	std::cout << "\e[1;34mLast Name: \e[0m" << phonebook.contact[index].last_name << "\n";
	std::cout << "\e[1;34mNickname: \e[0m" << phonebook.contact[index].nickname << "\n";
	std::cout << "\e[1;34mPhone Number: \e[0m" << phonebook.contact[index].phone_number << "\n";
	std::cout << "\e[1;34mDarkest Secret: \e[0m" << phonebook.contact[index].darkest_secret << "\n\n";
	return (0);
}

void	search(PhoneBook phonebook){
	std::string	input;

	if (display_contacts(phonebook))
		return ;
	std::cout << "\nEnter contact's index to display contact's information (or RETURN to go back):  ";
	std::getline(std::cin, input);
	while (input != "RETURN" && !std::cin.eof()) {
		if (!print_contact_info(phonebook, input))
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
#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	display_intro(void){
	std::cout << "\n\e[1;32mWelcome to the PhoneBook!\e[0m\n\n";
	std::cout << "Enter ADD to save anew contact\n";
	std::cout << "Enter SEARCH to display a specific contact\n";
	std::cout << "Enter EXIT to quit the PhoneBook\n\n";
}

void	search(void){
	return ;
}

void	add(void) {
	Contact	contact;

	return ;
}

int main(int argc, char **argv)
{
    if (argc == 1 && argv)
    {
		display_intro();	
		std::string input;
		std::cout << "Type your command: ";
		std::getline(std::cin, input);
		while (input != "EXIT") {
			if (std::cin.eof())
				return (0);
			if(input == "ADD")
				add();
			else if (input == "SEARCH")
				search();
			else
				std::cout << "\e[1;31mCommand invalid!\e[0m\nRe-";
			std::cout << "Type your command: ";
			std::getline(std::cin, input);
		}
    }
	else
		std::cout << "\e[1;31mERROR: Execute ./phonebook without arguments!\e[0m\n";
	return (0);
}
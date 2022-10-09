#include <iostream>
#include <iomanip>
#include "Contact.hpp"

std::string	first_name(void) {
	std::string	input;
	std::cout << "Enter First Name: " << std::endl;
	std::getline(std::cin, input);
	while (input == "") {
		std::cout << "\e[1;31mEnter First Name (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	last_name(void) {
	std::string	input;
	std::cout << "Enter Last Name: " << std::endl;
	std::getline(std::cin, input);
	while (input == "") {
		std::cout << "\e[1;31mEnter Last Name (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	nickname(void) {
	std::string	input;
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, input);
	while (input == "") {
		std::cout << "\e[1;31mEnter Nickname (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	phone_number(void) {
	std::string	input;
	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, input);
	while (input == "") {
		std::cout << "\e[1;31mEnter Phone Number (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	darkest_secret(void) {
	std::string	input;
	std::cout << "Enter Darkest Secret: " << std::endl;
	std::getline(std::cin, input);
	while (input == "") {
		std::cout << "\e[1;31mEnter Darkest Secret (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}
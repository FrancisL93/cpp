#include <iostream>
#include <iomanip>

std::string	get_first_name(void) {
	std::string	input;

	std::cout << "Enter First Name: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof()) {
		std::cout << "\e[1;31mEnter First Name (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
			exit(0);
	return (input);
}

std::string	get_last_name(void) {
	std::string	input;

	std::cout << "Enter Last Name: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof()) {
		std::cout << "\e[1;31mEnter Last Name (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		exit(0);
	return (input);
}

std::string	get_nickname(void) {
	std::string	input;

	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof()) {
		std::cout << "\e[1;31mEnter Nickname (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		exit(0);
	return (input);
}

std::string	get_phone_number(void) {
	std::string	input;

	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof()) {
		std::cout << "\e[1;31mEnter Phone Number (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		exit(0);
	return (input);
}

std::string	get_darkest_secret(void) {
	std::string	input;

	std::cout << "Enter Darkest Secret: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof()) {
		std::cout << "\e[1;31mEnter Darkest Secret (Cannot be empty!): \e[0m" << std::endl;
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		exit(0);
	return (input);
}
#include <iostream>

void	print_nan(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;}

void	print_neg_inf(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;}

void	print_pos_inf(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;}

void	print_int(std::string arg) {
	try {
		int i = std::stoi(arg);
		std::cout << "int: " << i << std::endl;}
	catch (const std::invalid_argument& e) {
		std::cout << "int: impossible" << std::endl;}
	catch (const std::out_of_range& e) {
		std::cout << "int: out of range" << std::endl;}
}

void	print_char(std::string arg) {
	try {
		int		i = std::stoi(arg);
		if (i < 0 || i > 255) {
			std::cout << "char: impossible" << std::endl;}
		char c = i;
		if (std::isprint(c) == 0) {
			std::cout << "char: Non displayable" << std::endl;}
		else {std::cout << "char: '" << c << "'" << std::endl;}}
	catch (const std::exception& e) {
		std::cout << "char: impossible" << std::endl;}
}

void	print_float(std::string arg) {
	try {
		char *end;
		float	f = std::strtof(arg.data(), &end);
		if (errno) {
			std::cout << "float: impossible" << std::endl;}
		if ((int) f == f) {
			std::cout << "float: " << f << ".0f" << std::endl;}
		else {
			std::cout << "float: " << f << std::endl;}
	}
	catch (const std::exception& e) {
		std::cout << "float: impossible" << std::endl;}
}

void	print_double(std::string arg) {
	try {
		double	d = std::stod(arg);
		if ((int) d == d) {
			std::cout << "double: " << d << ".0" << std::endl;}
		else {
			std::cout << "double: " << d << std::endl;}
	}
	catch (const std::exception& e) {
		std::cout << "double: impossible" << std::endl;}
}

int	main(int argc, char **argv) {
	if (argc != 2) {return (1);}
	
	std::string conv = std::string(argv[1]);
	if (conv == "nan" || conv == "nanf") {
		print_nan();
		return (0);}
	if (conv == "-inff" || conv == "-inf") {
		print_neg_inf();
		return (0);}
	if (conv == "+inff" || conv == "+inf") {
		print_pos_inf();
		return (0);}

	print_char(conv);
	print_int(conv);
	print_float(conv);
	print_double(conv);
}
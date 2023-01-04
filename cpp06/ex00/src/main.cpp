#include <iostream>

int	main(int argc, char **argv) {
	if (argc == 2) {
		char	c = 'c';
		int		i = std::stoi(std::string(argv[1]));
		float	f = std::stof(std::string(argv[1]));
		f = static_cast<float>(f);
		double	d = std::stod(std::string(argv[1]));

		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}
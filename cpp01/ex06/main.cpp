#include "Harl.hpp"

int	main( int argc, char **argv ) {
	Harl harl;

	if (argc == 2) {harl.complain((std::string)argv[1]);}
	return (0);
}
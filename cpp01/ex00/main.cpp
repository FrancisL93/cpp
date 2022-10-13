#include "Zombie.hpp"

Zombie*	newZombie(std::string name );

int	main( void ) {
	Zombie	zombie1;
	Zombie	*zombie2;

	zombie2 = NULL;
	zombie1.randomChump("Frankenstein");
	return 0;
}
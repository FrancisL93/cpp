#include "Zombie.hpp"

Zombie*	newZombie(std::string name );

int	main( void ) {
	Zombie zombie1;

	zombie1.randomChump( "Frankenstein" );
	return 0;
}
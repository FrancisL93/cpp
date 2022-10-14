#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name ) {
	Zombie *zombie = new Zombie;

	zombie->_name = name;
	zombie->announce();
	return (zombie);
}

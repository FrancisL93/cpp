#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name ) {
	Zombie *zombie = new Zombie;

	this->name = name;
	this->announce();
	return (zombie);
}

#include "Zombie.hpp"

void Zombie::randomChump( std::string name ) {
	Zombie::name = name;
	this->announce();
}

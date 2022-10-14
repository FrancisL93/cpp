#include "Zombie.hpp"

void Zombie::randomChump( std::string name ) {
	Zombie::_name = name;
	this->announce();
}

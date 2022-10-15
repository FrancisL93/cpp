#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}

Zombie::Zombie( void ) {

}

Zombie::~Zombie( void ) {
	std::cout << _name << " destroyed!" << std::endl;
}

#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie( std::string name ) {
	Zombie *zombie = new Zombie;

	zombie->_name = name;
	zombie->announce();
	return (zombie);
}

Zombie::Zombie( void ) {

}

Zombie::~Zombie( void ) {
	std::cout << _name << " destroyed!" << std::endl;
}

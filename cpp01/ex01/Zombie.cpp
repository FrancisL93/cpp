#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ) {

}

Zombie::~Zombie( void ) {
	std::cout << name << " destroyed!" << std::endl;
}
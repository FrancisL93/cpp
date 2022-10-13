#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ) {

}

Zombie::~Zombie( void ) {
	std::cout << this->name << " destroyed!" << std::endl;
	delete this;
}

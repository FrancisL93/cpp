#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump( std::string name ) {
	Zombie::name = name;
}

Zombie::Zombie( void ) {

}

Zombie::~Zombie( void ) {

}

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name ) {
	Zombie **zombie = new Zombie*;

	for (int i = 0; i < N; i++) {
		zombie[i] = NULL;
		zombie[i]->newZombie( name );
	}
	return (*zombie);
}

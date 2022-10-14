#include "Zombie.hpp"

void	am_i_dead_dead(Zombie zombie_stack, Zombie *zombie_heap) {
	std::cout << "zombie_stack announce: ";
	zombie_stack.announce();
	std::cout << "zombie_heap announce: ";
	zombie_heap->announce();
}

int	main( void ) {
	Zombie	zombie_stack;
	Zombie	*zombie_heap;

	zombie_heap = NULL;
	zombie_heap = zombie_heap->newZombie("Zombie_heap");
	zombie_stack.randomChump("Frankenstein_stack");
	std::cout << std::endl;
	am_i_dead_dead(zombie_stack, zombie_heap);
	std::cout << "and this is why heap objects are useful...\n" << std::endl;
	delete zombie_heap;
	return 0;
}
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap monkey("Johnny");
	ScavTrap dog("Pong");
	
	monkey.attack("Himself");
	monkey.beRepaired(10);
	monkey.modifyDamage(2);
	dog.beRepaired(20);
	monkey.attack("Another one");
	monkey.modifyDamage(-4);
	monkey.attack("Another one");
	std::cout << std::endl;
	dog.attack("monkey");
	dog.modifyDamage(10);
	dog.attack("dog");
	dog.guardGate();

	// monkey.takeDamage(30);
	// monkey.attack("Someone");
	// monkey.beRepaired(404040);
	//for (int i = 0; i < 11; i++) {monkey.attack("Himself");}
	return (0);} 
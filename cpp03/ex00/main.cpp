#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap monkey("Johnny");
	
	monkey.attack("Himself");
	monkey.beRepaired(10);
	monkey.modifyDamage(2);
	monkey.attack("Another one");
	monkey.modifyDamage(-4);
	monkey.attack("Another one");
	// monkey.takeDamage(30);
	// monkey.attack("Someone");
	// monkey.beRepaired(404040);
	//for (int i = 0; i < 11; i++) {monkey.attack("Himself");}
	return (0);} 
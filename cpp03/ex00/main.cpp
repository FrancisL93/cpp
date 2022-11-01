#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap monkey("Johnny");
	
	monkey.attack("Himself");
	monkey.beRepaired(10);
	monkey.takeDamage(30);
	monkey.attack("Someone");
	monkey.beRepaired(404040);
	return (0);} 
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap 	cat("Garfield");
	ScavTrap	*cat2;
	ScavTrap	cat3;

	cat.attack("Jon Arbukle");
	cat.guardGate();
	cat2 = &cat;
	cat2->takeDamage(20);
	cat3.attack("Jon Arbukle");
	return (0);} 
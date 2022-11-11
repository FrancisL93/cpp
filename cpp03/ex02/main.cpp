#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap dog("Pong");
	
	std::cout << std::endl;
	std::cout << "Name: " << dog.getName() << std::endl;
	std::cout << "Hit points: " << dog.getHitPoints() << std::endl;
	std::cout << "Energy: " << dog.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << dog.getAttackDamage() << std::endl << std::endl;
	dog.guardGate();

	// monkey.takeDamage(30);
	// monkey.attack("Someone");
	// monkey.beRepaired(404040);
	//for (int i = 0; i < 11; i++) {monkey.attack("Himself");}
	return (0);} 
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap dog("Pong");
	
	std::cout << std::endl;
	std::cout << "Name: " << dog.getName() << std::endl;
	std::cout << "Hit points: " << dog.getHitPoints() << std::endl;
	std::cout << "Energy: " << dog.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << dog.getAttackDamage() << std::endl;
	dog.highFivesGuys();
	std::cout << std::endl;

	return (0);} 
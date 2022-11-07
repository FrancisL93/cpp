#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap monkey("Johnny");
	ScavTrap dog("Pong");
	FragTrap pony("Charlie");
	DiamondTrap pizza("Poutine");
	
	std::cout << "These were the constructors" << std::endl << std::endl;
	std::cout << pizza.getName() << std::endl;
	std::cout << "Diamond inherit FragTrap hit points:" << std::endl;
	std::cout << pizza.getHitPoints() << " vs " << pony.getHitPoints() << std::endl;
	std::cout << "Diamond inherit ScavTrap energy points:" << std::endl;
	std::cout << pizza.getEnergyPoints() << " vs " << dog.getEnergyPoints() << std::endl;
	std::cout << "Diamond inherit Fragtrap attack damage:" << std::endl;
	std::cout << pizza.getAttackDamage() << " vs " << pony.getAttackDamage() << std::endl;
	std::cout << "Diamond inherit ScavTrack member function attack:" << std::endl;
	pizza.attack("no one");
	std::cout << " vs ";
	dog.attack("no one");
	pizza.highFivesGuys();
	pizza.guardGate();
	std::cout << std::endl;
	pizza.whoAmI();

	std::cout << std::endl << "These are the destructors" << std::endl;
	return (0);} 
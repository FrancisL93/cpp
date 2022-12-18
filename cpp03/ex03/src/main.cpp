#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap poutine;
	ScavTrap	a;
	FragTrap	b;

	std::cout << poutine.getAttackDamage() << " vs " << b.getAttackDamage() << std::endl;
	std::cout << poutine.getHitPoints() << " vs " << b.getHitPoints() << std::endl;
	std::cout << poutine.getEnergyPoints() << " vs " << a.getEnergyPoints() << std::endl;
	poutine.attack("Burger");
	poutine.whoAmI();

	return (0);} 
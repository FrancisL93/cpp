#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	ScavTrap *tmp_scav = new ScavTrap();
	FragTrap *tmp_frag = new FragTrap();

	this->_name = name;
	setHitPoints(tmp_frag->getHitPoints());
	setEnergyPoints(tmp_scav->getEnergyPoints());
	setAttackDamage(tmp_frag->getAttackDamage());
	delete tmp_frag;
	delete tmp_scav;
	std::cout << "DiamondTrap constructed" << std::endl;
	return ;}

// Destructor
DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destroyed" << std::endl;
	return ;}
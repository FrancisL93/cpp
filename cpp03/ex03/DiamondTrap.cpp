#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	ScavTrap	*tmp_scav = new ScavTrap();
	this->_name = name;
	setEnergyPoints(tmp_scav->getEnergyPoints());
	delete	tmp_scav;
	std::cout << "DiamondTrap constructed" << std::endl;
	return ;}

// member functions
void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << this->_name << 
	" and my claptrap name is " << ClapTrap::getName() << std::endl; 
}

// Destructor
DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destroyed" << std::endl;
	return ;}
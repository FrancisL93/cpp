#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "ScavTrap constructed" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;}

// Member functions
void	ScavTrap::guardGate( void ) {
	std::cout << this->getName() << " is now in Gate keeper mode! (Beware...)" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed" << std::endl;
	return ;}
#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "FragTrap constructed" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;}

FragTrap::FragTrap( void ) : ClapTrap() {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;}

// Member functions
void	FragTrap::highFivesGuys( void ) {
	std::cout << getName() << " request a high fives..." << std::endl;
	return ;
}

// Destructor
FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destroyed" << std::endl;
	return ;}
#include "DiamondTrap.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	std::cout << "DiamondTrap constructed" << std::endl;}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap) {
	this->_name = diamondtrap._name;
	_hitPoints = diamondtrap._hitPoints;
	_energyPoints = diamondtrap._energyPoints;
	_attackDamage = diamondtrap._attackDamage;
	*this = diamondtrap;
	std::cout << "Copy constructor called" << std::endl;}

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	DiamondTrap::attack( const std::string& target ) {
	if (!this->_hitPoints) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energyPoints) {std::cout << "Not enough energy..." << std::endl; return ;}
	std::cout << this->_name << " attacks " << target << " with passion, causing " << this->_attackDamage \
	<< " points of damage!" << std::endl;
	this->_energyPoints -= 1; return ;}

void	DiamondTrap::guardGate( void ) {
	std::cout << this->getName() << " is now in Gate keeper mode! (Beware...)"
		<< std::endl;}
	
//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& diamondtrap) {
		if (this != &diamondtrap) {
		this->_name = diamondtrap._name;
		this->_hitPoints = diamondtrap._hitPoints;
		this->_attackDamage = diamondtrap._attackDamage;
		this->_energyPoints = diamondtrap._energyPoints;}
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destroyed" << std::endl;
	return ;}
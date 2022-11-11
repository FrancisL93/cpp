#include "ScavTrap.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructed" << std::endl;}

ScavTrap::ScavTrap( const ScavTrap &scavtrap) : ClapTrap(scavtrap) {
	_name = scavtrap._name;
	_hitPoints = scavtrap._hitPoints;
	_energyPoints = scavtrap._energyPoints;
	_attackDamage = scavtrap._attackDamage;
	*this = scavtrap;
	std::cout << "Copy constructor called" << std::endl;}

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	ScavTrap::attack( const std::string& target ) {
	if (!this->_hitPoints) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energyPoints) {std::cout << "Not enough energy..." << std::endl; return ;}
	std::cout << this->_name << " attacks " << target << " with passion, causing " << this->_attackDamage \
	<< " points of damage!" << std::endl;
	this->_energyPoints -= 1; return ;}

void	ScavTrap::guardGate( void ) {
	std::cout << this->getName() << " is now in Gate keeper mode! (Beware...)"
		<< std::endl;}
	
//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

ScavTrap &ScavTrap::operator=(const ScavTrap& scavtrap) {
		if (this != &scavtrap) {
		this->_name = scavtrap._name;
		this->_hitPoints = scavtrap._hitPoints;
		this->_attackDamage = scavtrap._attackDamage;
		this->_energyPoints = scavtrap._energyPoints;}
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed" << std::endl;
	return ;}
#include "FragTrap.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructed" << std::endl;}

FragTrap::FragTrap( const FragTrap &fragtrap) : ClapTrap(fragtrap) {
	_name = fragtrap._name;
	_hitPoints = fragtrap._hitPoints;
	_energyPoints = fragtrap._energyPoints;
	_attackDamage = fragtrap._attackDamage;
	*this = fragtrap;
	std::cout << "FragTrap copy constructor called" << std::endl;}

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	FragTrap::attack( const std::string& target ) {
	if (!this->_hitPoints) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energyPoints) {std::cout << "Not enough energy..." << std::endl; return ;}
	std::cout << this->_name << " attacks " << target << " without passion, causing " << this->_attackDamage \
	<< " points of damage!" << std::endl;
	this->_energyPoints -= 1; return ;}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " request a positive high fives on the stantard output..." << std::endl;
}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
		if (this != &fragtrap) {
		this->_name = fragtrap._name;
		this->_hitPoints = fragtrap._hitPoints;
		this->_attackDamage = fragtrap._attackDamage;
		this->_energyPoints = fragtrap._energyPoints;}
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
	return ;}
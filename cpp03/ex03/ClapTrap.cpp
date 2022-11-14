#include "ClapTrap.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " constructed" << std::endl; return ;}

ClapTrap::ClapTrap (const ClapTrap &claptrap ) : _name(claptrap._name),
	_hitPoints(claptrap._hitPoints),
	_energyPoints(claptrap._energyPoints),
	_attackDamage(claptrap._attackDamage) {
		std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;}

//**************************************************************************//
//                                 Setters                                  //
//**************************************************************************//

void	ClapTrap::setHitPoints( unsigned int value ) {this->_hitPoints = value;}
void	ClapTrap::setEnergyPoints( unsigned int value ) {this->_energyPoints = value;}
void	ClapTrap::setAttackDamage( unsigned int value ) {this->_attackDamage = value;}

//**************************************************************************//
//                                 Getters                                  //
//**************************************************************************//

std::string	ClapTrap::getName( void ) {return (this->_name);}
int	ClapTrap::getHitPoints( void ) {return (this->_hitPoints);}
int	ClapTrap::getEnergyPoints( void ) {return (this->_energyPoints);}
int	ClapTrap::getAttackDamage( void ) {return (this->_attackDamage);}

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	ClapTrap::modifyDamage( int dmg_variation ) {
	if (dmg_variation < 0 && (unsigned int) (dmg_variation / -1) > this->_attackDamage) {
		this->_attackDamage = 0;}
	else
		this->_attackDamage += dmg_variation;
	std::cout << this->_name << " attack damage now: " << this->_attackDamage << std::endl;}

void	ClapTrap::attack( const std::string& target ) {
	if (!this->_hitPoints) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energyPoints) {std::cout << "Not enough energy..." << std::endl; return ;}
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage \
	<< " points of damage!" << std::endl;
	this->_energyPoints -= 1; return ;}

void	ClapTrap::takeDamage( unsigned int amount ) {
	unsigned int	dmg;

	if (this->_hitPoints == 0) {std::cout << this->_name << " is already dead..." << std::endl; return ;}
	dmg = amount < this->_hitPoints ? amount : this->_hitPoints;
	this->_hitPoints -= dmg;
	if (this->_hitPoints)
		std::cout << this->_name << " get hit " << "and loses " << dmg \
	<< " hit points!" << std::endl;
	else {std::cout << this->_name << " get hit by " << amount << " and dies..." << std::endl;}return ;}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (!this->_hitPoints) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energyPoints) {std::cout << "Not enough energy..." << std::endl; return ;}
	this->_hitPoints += amount;
	std::cout << this->_name << " repairs himself by " << amount << " and now as " \
	<< this->_hitPoints << " hit points!" << std::endl;
	this->_energyPoints -= 1; return ;}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

ClapTrap &ClapTrap::operator=(const ClapTrap& claptrap) {
	if (this != &claptrap) {
		this->_name = claptrap._name;
		this->_hitPoints = claptrap._hitPoints;
		this->_attackDamage = claptrap._attackDamage;
		this->_energyPoints = claptrap._energyPoints;}
	std::cout << "Copy assignement operator called" << std::endl;
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl; return ;}







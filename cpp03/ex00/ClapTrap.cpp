#include "ClapTrap.hpp"

// constructor
ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl; return ;}

// public member functions
void	ClapTrap::attack( const std::string& target ) {
	if (!this->_hit_points) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energy_points) {std::cout << "Not enough energy..." << std::endl; return ;}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage \
	<< " points of damage!" << std::endl;
	this->_energy_points -= 1; return ;}

void	ClapTrap::takeDamage( unsigned int amount ) {
	unsigned int	dmg;

	if (this->_hit_points == 0) {std::cout << "ClapTrap " << this->_name << " is already dead..." << std::endl; return ;}
	dmg = amount < this->_hit_points ? amount : this->_hit_points;
	this->_hit_points -= dmg;
	if (this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " get hit " << "and loses " << dmg \
	<< " hit points!" << std::endl;
	else {std::cout << "ClapTrap " << this->_name << " get hit by " << amount << " and dies..." << std::endl;}return ;}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (!this->_hit_points) {std::cout << this->_name << " is dead..." << std::endl; return ;}
	if (!this->_energy_points) {std::cout << "Not enough energy..." << std::endl; return ;}
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " repairs himself by " << amount << " and now as " \
	<< this->_hit_points << " hit points!" << std::endl;
	this->_energy_points -= 1; return ;}


// destructor 
ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl; return ;}

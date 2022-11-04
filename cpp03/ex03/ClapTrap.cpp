#include "ClapTrap.hpp"

// constructor
ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl; return ;}

ClapTrap::ClapTrap( void ) {
	return ;}

// Setters
void	ClapTrap::setHitPoints( unsigned int value ) {
	this->_hit_points = value;}

void	ClapTrap::setEnergyPoints( unsigned int value ) {
	this->_energy_points = value;}

void	ClapTrap::setAttackDamage( unsigned int value ) {
	this->_attack_damage = value;}

// Getters
std::string	ClapTrap::getName( void ) {
	return (this->_name);}

int	ClapTrap::getHitPoints( void ) {
	return (this->_hit_points);}

int	ClapTrap::getEnergyPoints( void ) {
	return (this->_energy_points);}

int	ClapTrap::getAttackDamage( void ) {
	return (this->_attack_damage);}

// public member functions
void	ClapTrap::modifyDamage( int dmg_variation ) {
	if (dmg_variation < 0 && (unsigned int) (dmg_variation / -1) > this->_attack_damage) {
		this->_attack_damage = 0;}
	else
		this->_attack_damage += dmg_variation;
	std::cout << "ClapTrap " << this->_name << " attack damage now: " << this->_attack_damage << std::endl;}

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

#include "ClapTrap.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

ClapTrap::ClapTrap(std::string name): _Name(name), _HitPoints(10), \
_EnergyPoints(10), _AttackDamage(0){std::cout << "Construction" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &copy){*this = copy;}

//**************************************************************************//
//                                 Setters                                  //
//**************************************************************************//

//**************************************************************************//
//                                 Getters                                  //
//**************************************************************************//

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	ClapTrap::attack(const std::string& target){
	if (this->_HitPoints == 0){std::cout << this->_Name << " is dead..." << std::endl;}
	else if (this->_EnergyPoints > 0) {
		std::cout << this->_Name << " attacks " << target << "!" << std::endl;
		std::cout << target << " loses " << this->_AttackDamage << " hit points" << std::endl;
		this->_EnergyPoints -= 1;}
	else {std::cout << "Not enough energy..." << std::endl;}}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_HitPoints == 0) {std::cout << this->_Name << " is dead..." << std::endl;}
	else if (this->_EnergyPoints > 0 && this->_HitPoints > amount) {
		std::cout << this->_Name << " takes " << amount << " of damage!" << std::endl;
		this->_HitPoints -= amount;
		std::cout << this->_Name << " now has " << this->_HitPoints << " hit points";
		std::cout << std::endl;}
	else {std::cout << this->_Name << " got killed!" << std::endl;this->_HitPoints = 0;}}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_HitPoints == 0){std::cout << this->_Name << " is dead..." << std::endl;}
	else if (this->_EnergyPoints > 0) {
		std::cout << this->_Name << " repairs himself by " << amount << " hit points!" << std::endl;
		this->_HitPoints += 1;
		std::cout << this->_Name << " now has " << this->_HitPoints << " hit points" << std::endl;
		this->_EnergyPoints -= 1;}
	else {std::cout << "Not enough energy..." << std::endl;}}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy){
	if (this != &copy){
		this->_Name = copy._Name;
		this->_HitPoints = copy._HitPoints;
		this->_EnergyPoints = copy._EnergyPoints;
		this->_AttackDamage = copy._AttackDamage;}
	return (*this);}

//************************************************** ************************//
//                               Destructors                                //
//**************************************************************************//

ClapTrap::~ClapTrap(void){std::cout << "Destruction" << std::endl;}
#include "HumanB.hpp"

HumanB::HumanB( void ) {
	_weapon = Weapon();
}

HumanB::HumanB( std::string name ) {
	_weapon = Weapon();
	_weapon.setType(name);
}

HumanB::~HumanB( void ) {

}

void	HumanB::setWeapon( std::string weaponType ) {
	_weapon = Weapon(weaponType);
	return ;
}
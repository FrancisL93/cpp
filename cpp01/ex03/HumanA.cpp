#include "HumanA.hpp"

HumanA::HumanA( void ) {
	return ;
}

HumanA::HumanA( std::string name, Weapon weaponType ) {
	this->_name = name;
	this->_weapon = weaponType;
}

HumanA::HumanA( std::string name ) {
	this->_name = name;
}

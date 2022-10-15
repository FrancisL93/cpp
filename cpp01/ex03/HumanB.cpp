#include "HumanB.hpp"

HumanB::HumanB( void ) {

}

HumanB::HumanB( std::string weapon ) {
	this->_weapon = Weapon(weapon);
}

HumanB::~HumanB( void ) {

}
#include "Weapon.hpp"

Weapon::Weapon( void ) {
	return ;
}

Weapon::Weapon( std::string newType ) {
	this->_type = newType;
}

Weapon::~Weapon( void ) {
	return ;
}

std::string const &Weapon::getType( void ) const{
	return (this->_type);
}

void	Weapon::setType( std::string newType ) {
	this->_type = newType;
	return ;
}
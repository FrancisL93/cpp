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

std::string&	Weapon::getType( void ) const{
	const std::string *type = &_type;
	return &type;
}

void	setType( std::string newType ) {

	return ;
}
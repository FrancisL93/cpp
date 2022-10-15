#ifndef CPP01_EX03_WEAPON_HPP
# define CPP01_EX03_WEAPON_HPP

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
	private:
		std::string _type;
	public:
		std::string&	getType( void ) const;
		void			setType( std::string newType );

		Weapon( void );
		~Weapon( void );
};

#endif
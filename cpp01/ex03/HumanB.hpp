#ifndef CPP01_EX03_HUMANB_HPP
# define CPP01_EX03_HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon 		*_weapon;

	public:
		HumanB( void );
		HumanB( std::string name );
		void	attack( void );
		void	setWeapon( Weapon weaponType);

		~HumanB( void );
};

#endif
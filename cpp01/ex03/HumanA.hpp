#ifndef CPP01_EX03_HUMANA_HPP
# define CPP01_EX03_HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon 		_weapon;

	public:
		void	attack( void );
		
		HumanA( void );
		~HumanA( void );
};

#endif
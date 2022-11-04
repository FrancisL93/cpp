#ifndef CPP03_EX03_DIAMONDTRAP_HPP
# define CPP03_EX03_DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string _name;

	public:
		using	ScavTrap::attack;

		DiamondTrap( std::string name );
		~DiamondTrap( void );
};

#endif
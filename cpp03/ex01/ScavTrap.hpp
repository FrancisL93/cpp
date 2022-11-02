#ifndef CPP03_EX01_SCAVTRAP_HPP
# define CPP03_EX01_SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:

	public:
		void	guardGate( void );

		ScavTrap( std::string name );
		~ScavTrap( void );
};

#endif
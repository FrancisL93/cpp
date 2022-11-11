#ifndef CPP03_EX02_SCAVTRAP_HPP
# define CPP03_EX02_SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	private:

	protected:

	public:
	/* Member functions */
		void	guardGate( void );
	/* Virtual member functions */
		void	attack( const std::string& target );
	/* Operators overload */
		ScavTrap &operator=(const ScavTrap& scavtrap);
	/* Constructors */
		ScavTrap( std::string name );
	/* Copy Constructor */
		ScavTrap(const ScavTrap &scavtrap);
	/* Destructors */
		~ScavTrap( void );
};

#endif
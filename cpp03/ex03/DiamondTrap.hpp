#ifndef CPP03_EX03_DIAMONDTRAP_HPP
# define CPP03_EX03_DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap {
	private:
		std::string _name;

	protected:

	public:
	/* Member functions */
		void	guardGate( void );
	/* Virtual member functions */
		void	attack( const std::string& target );
	/* Duplicate inheritence precisions */
		using	ScavTrap::attack;
	/* Operators overload */
		DiamondTrap &operator=(const DiamondTrap& diamondtrap);
	/* Constructors */
		DiamondTrap( std::string name );
	/* Copy Constructor */
		DiamondTrap(const DiamondTrap &diamondtrap);
	/* Destructors */
		~DiamondTrap( void );
};

#endif
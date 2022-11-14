#ifndef CPP03_EX03_FRAGTRAP_HPP
# define CPP03_EX03_FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	private:

	protected:

	public:
	/* Setters */

	/* Getters */

	/* Member functions */
		void	highFivesGuys(void);
	/* Virtual member functions */
		void	attack( const std::string& target );
	/* Operators overload */
		FragTrap &operator=(const FragTrap& fragtrap);
	/* Constructors */
		FragTrap( std::string name );
	/* Copy constructors */
		FragTrap (const FragTrap &fragtrap );
	/* Destructors */
		~FragTrap( void );
};

#endif
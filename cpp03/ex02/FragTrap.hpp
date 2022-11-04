#ifndef CPP03_EX02_FRAGTRAP_HPP
# define CPP03_EX02_FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	private:

	public:
		void	highFivesGuys( void );

		FragTrap( std::string name );
		~FragTrap( void );
};

#endif
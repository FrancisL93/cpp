#ifndef CPP03_EX03_FRAGTRAP_HPP
# define CPP03_EX03_FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	private:

	public:
		void	highFivesGuys( void );

		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
};

#endif
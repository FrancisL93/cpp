#ifndef CPP03_EX00_CLAPTRAP_HPP
# define CPP03_EX00_CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string 	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		void	modifyDamage( int dmg_variation );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );


	/* Operators overlaod */
		ClapTrap &operator=(const ClapTrap& claptrap);
	/* Constructors */
		ClapTrap( std::string name );
	/* Copy constructors */
		ClapTrap (const ClapTrap &claptrap );
	/* Destructors */
		~ClapTrap( void );
};

#endif
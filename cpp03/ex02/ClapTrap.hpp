#ifndef CPP03_EX02_CLAPTRAP_HPP
# define CPP03_EX02_CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:

	protected:
		std::string 	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
	/* Setters */
		void	setHitPoints( unsigned int value );
		void	setEnergyPoints( unsigned int value );
		void	setAttackDamage( unsigned int value );
	/* Getters */
		std::string	getName( void );
		int		getHitPoints( void );
		int		getEnergyPoints( void );
		int		getAttackDamage( void );
	/* Member functions */
		void	modifyDamage( int dmg_variation );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
	/* Virtual member functions */
		virtual void	attack( const std::string& target );
	/* Operators overload */
		ClapTrap &operator=(const ClapTrap& claptrap);
	/* Constructors */
		ClapTrap( std::string name );
	/* Copy constructors */
		ClapTrap (const ClapTrap &claptrap );
	/* Destructors */
		~ClapTrap( void );
};

#endif
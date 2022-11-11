#ifndef CPP03_EX02_FRAGTRAP_HPP
# define CPP03_EX02_FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap {
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
		FragTrap &operator=(const FragTrap& fragtrap);
	/* Constructors */
		FragTrap( std::string name );
	/* Copy constructors */
		FragTrap (const FragTrap &fragtrap );
	/* Destructors */
		~FragTrap( void );
};

#endif
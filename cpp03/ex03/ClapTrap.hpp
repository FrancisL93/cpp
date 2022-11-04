#ifndef CPP03_EX03_CLAPTRAP_HPP
# define CPP03_EX03_CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string 	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		void	setHitPoints( unsigned int value );
		void	setEnergyPoints( unsigned int value );
		void	setAttackDamage( unsigned int value );

		std::string	getName( void );
		int		getHitPoints( void );
		int		getEnergyPoints( void );
		int		getAttackDamage( void );

		void	modifyDamage( int dmg_variation );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
};

#endif
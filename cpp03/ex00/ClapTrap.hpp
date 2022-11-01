#ifndef CPP03_EX00_CLAPTRAP_HPP
# define CPP03_EX00_CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string 	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		ClapTrap( std::string name );
		~ClapTrap( void );
};

#endif
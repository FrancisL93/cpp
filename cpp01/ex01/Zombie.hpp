#ifndef CPP01_EX00_ZOMBIE_HPP
#define CPP01_EX00_ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	void	announce( void );
	Zombie*	newZombie( std::string name );
	Zombie*	zombieHorde( int N, std::string name);

	Zombie( void );
	~Zombie();
};

#endif
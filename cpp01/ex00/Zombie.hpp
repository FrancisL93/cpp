#ifndef CPP01_EX00_ZOMBIE_HPP
#define CPP01_EX00_ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void	announce( void );
	Zombie*	newZombie(std::string name );
	void	randomChump( std::string name );

	Zombie( void );
	~Zombie();
};

#endif
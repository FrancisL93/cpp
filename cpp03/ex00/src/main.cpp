#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	a("Pizza");

	//for (int i = 0; i < 11; i++){a.attack("Poutine");}
	//for (int i = 0; i < 11; i++){a.beRepaired(1);}
	for (int i = 0; i < 11; i++){a.takeDamage(1);}
}
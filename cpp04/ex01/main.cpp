#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {
	Animal *(animals[10]);
	Animal *tmp1;
	Animal *tmp2;
	for (int i = 0; i < 4; i++) {
		std::cout << "Animal " << i + 1 << ": "<< std::endl;
		if (i < 2) {
			animals[i] = new Dog();}
		else {
			animals[i] = new Cat();}}
	std::cout << std::endl;
	tmp1 = animals[0];
	std::cout << "tmp1 copy type = " << tmp1->getType() << std::endl;
	tmp2 = tmp1;
	std::cout << "tmp2 copy type = " << tmp2->getType() << std::endl;
	tmp1 = animals[3];
	std::cout << "tmp1 new type = " << tmp1->getType();
	std::cout << " & tmp2 type stayed? -> " << tmp2->getType() << " (if same as tmp1, copy is shallow)" << std::endl << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout <<  "Animal " << i + 1 << ": " << std::endl;
		delete animals[i];}

	return 0;
}
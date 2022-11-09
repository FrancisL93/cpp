#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {
	Animal *(animals[10]);
	for (int i = 0; i < 4; i++) {
		std::cout << "Animal " << i + 1 << ": "<< std::endl;
		if (i < 2) {
			animals[i] = new Dog();}
		else {
			animals[i] = new Cat();}}
	for (int i = 0; i < 4; i++) {
		std::cout <<  "Animal " << i + 1 << ": " << std::endl;
		delete animals[i];}
	return 0;
}
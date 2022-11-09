#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main( void ) {
	// Animal	elephant;
	// Dog		SnoopDogg = Dog();
	// Cat		Garfield = Cat();

	// std::cout << elephant.getType();
	// std::cout << elephant.getType() << std::endl;
	// SnoopDogg.makeSound();
	// Garfield.makeSound();
	// std::cout << "Animal sound should not appear:";
	// elephant.makeSound();
	// std::cout << "..." << std::endl;

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	const Animal* meta = new Animal();
	const Animal* j = new WrongDog();
	const Animal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	return 0;
}
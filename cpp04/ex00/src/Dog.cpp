#include "Dog.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << "Dog default construction" << std::endl;}

Dog::Dog(const Dog &copy) {
	this->_type = copy._type;
	std::cout << "Dog copy construction" << std::endl;
	*this = copy;}

//**************************************************************************//
//                                 Setters                                  //
//**************************************************************************//

//**************************************************************************//
//                                 Getters                                  //
//**************************************************************************//

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

void	Dog::makeSound(void) {std::cout << "Woof" << std::endl;}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

Dog	&Dog::operator=(const Dog &copy){
	if (this != &copy){
		this->_type = copy._type;}
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

Dog::~Dog(void){std::cout << "Dog destruction" << std::endl;}
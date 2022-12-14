#include "Cat.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default construction" << std::endl;}

Cat::Cat(const Cat &copy) {
	this->_brain = new Brain();
	std::cout << "Cat copy construction" << std::endl;
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

void	Cat::makeSound(void) {std::cout << "Miaw" << std::endl;}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

Cat	&Cat::operator=(const Cat &copy){
	if (this != &copy){
		delete this->_brain;
		this->_type = copy._type;
		*this->_brain = *(copy._brain);}
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

Cat::~Cat(void){
	delete this->_brain;
	std::cout << "Cat destruction" << std::endl;}
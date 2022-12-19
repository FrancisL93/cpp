#include "Cat.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default construction" << std::endl;}

Cat::Cat(std::string type) {
	this->_type = type;
	this->_brain = new Brain();
	std::cout << "Cat construction" << std::endl;}

Cat::Cat(const Cat &copy) {
	this->_type = copy._type;
	this->_brain = new Brain();
	this->_brain = copy._brain;
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
		this->_brain = new Brain();
		this->_brain = copy._brain;
		this->_type = copy._type;}
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

Cat::~Cat(void){
	delete this->_brain;
	std::cout << "Cat destruction" << std::endl;}
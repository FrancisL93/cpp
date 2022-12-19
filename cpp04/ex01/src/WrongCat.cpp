#include "WrongCat.hpp"

//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << "WrongCat default construction" << std::endl;}

WrongCat::WrongCat(std::string type) {
	this->_type = type;
	std::cout << "WrongCat construction" << std::endl;}

WrongCat::WrongCat(const WrongCat &copy) {
	this->_type = copy._type;
	std::cout << "WrongCat copy construction" << std::endl;
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

void	WrongCat::makeSound(void) {std::cout << "WOOF" << std::endl;}

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

WrongCat	&WrongCat::operator=(const WrongCat &copy){
	if (this != &copy){
		this->_type = copy._type;}
	return (*this);}

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

WrongCat::~WrongCat(void){std::cout << "WrongCat destruction" << std::endl;}
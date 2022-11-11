#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);}

Fixed::Fixed (const Fixed &fixed ) {
	*this = fixed;
	std::cout << "Copy constructor called" << std::endl;}


Fixed &Fixed::operator=(const Fixed& fixed) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixed_point_number = fixed.getRawBits();
	return (*this);}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_number);}

void	Fixed::setRawBits( int const raw ) {
	this->_fixed_point_number = raw;}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;}

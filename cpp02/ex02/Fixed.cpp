#include "Fixed.hpp"

//Constructors
Fixed::Fixed( void ): _fixed_point_number(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;}
Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_number = num << this->_n_fractional_bits;
	return ;}
Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_number = roundf(num * pow(2, this->_n_fractional_bits));}
Fixed::Fixed (const Fixed &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;}

//Member functions
int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_number);}
void	Fixed::setRawBits( int const raw ) {
	this->_fixed_point_number = raw;}

int		Fixed::toInt( void ) const {
	return (this->_fixed_point_number >> this->_n_fractional_bits);}
float	Fixed::toFloat( void ) const {
	return ((float) this->_fixed_point_number / pow(2, this->_n_fractional_bits));}

//public overloaded member functions
Fixed		&Fixed::min(Fixed &fixed1, Fixed &fixed2) {return (fixed1 < fixed2 ? fixed1 : fixed2);}
Fixed		&Fixed::max(Fixed &fixed1, Fixed &fixed2) {return (fixed1 > fixed2 ? fixed1 : fixed2);}
const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {return (fixed1 < fixed2 ? fixed1 : fixed2);}
const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {return (fixed1 > fixed2 ? fixed1 : fixed2);}

//Assignment operator overload
Fixed &Fixed::operator=(const Fixed& fixed) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		this->_fixed_point_number = fixed._fixed_point_number;
	return (*this);}

//		comparison operators
bool	Fixed::operator< (const Fixed &fixed) const {return (this->getRawBits() < fixed.getRawBits());}
bool	Fixed::operator<= (const Fixed &fixed) const {return (this->getRawBits() <= fixed.getRawBits());}
bool	Fixed::operator> (const Fixed &fixed) const {return (this->getRawBits() > fixed.getRawBits());}
bool	Fixed::operator>= (const Fixed &fixed) const {return (this->getRawBits() >= fixed.getRawBits());}
bool	Fixed::operator== (const Fixed &fixed) const {return (this->getRawBits() == fixed.getRawBits());}
bool	Fixed::operator!= (const Fixed &fixed) const {return (this->getRawBits() != fixed.getRawBits());}

//		arithmetic operators
Fixed	Fixed::operator+(const Fixed &fixed) const {Fixed result;
	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (result);}
Fixed	Fixed::operator-(const Fixed &fixed) const {Fixed result;
	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (result);}
Fixed	Fixed::operator*(const Fixed &fixed) const {
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);}
Fixed	Fixed::operator/(const Fixed &fixed) const {
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);}

//		increment / decrement (& = pre, else = post)
Fixed	&Fixed::operator++ ( void ) {this->_fixed_point_number++; return (*this);}
Fixed	&Fixed::operator-- ( void ) {this->_fixed_point_number--; return (*this);}
Fixed	Fixed::operator++ ( int ) {Fixed old(*this); ++(*this); return (old);}
Fixed	Fixed::operator-- ( int ) {Fixed old(*this); --(*this); return (old);}

//Deconstructor
Fixed::~Fixed( void ) {std::cout << "Destructor called" << std::endl;}

//Outside functions
std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed) {
	ostream << fixed.toFloat();
	return (ostream);}
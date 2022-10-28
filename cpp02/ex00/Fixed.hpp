#ifndef CPP02_EX00_FIXED_HPP
#define CPP02_EX00_FIXED_HPP

#include <iostream>

class Fixed final
{
	public:
		Fixed ( void );
		Fixed (const Fixed &fixed );
		~Fixed ( void );
		Fixed & operator = (const Fixed &fixed);

	private:

};

#endif
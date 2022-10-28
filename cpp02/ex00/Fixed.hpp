#ifndef CPP02_EX00_FIXED_HPP
#define CPP02_EX00_FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		Fixed ( void );
		Fixed (const Fixed &fixed );
		virtual ~Fixed ( void );
		Fixed & operator = (const Fixed &fixed);

	private:
		int					_fixed_point_number;
		static const int	_n_fractional_bits = 8;
};

#endif
#ifndef CPP02_EX01_FIXED_HPP
#define CPP02_EX01_FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		int		toInt( void ) const;
		float	toFloat( void ) const;

		Fixed ( void );
		Fixed ( const int num );
		Fixed ( const float num );
		Fixed (const Fixed &fixed );
		virtual ~Fixed ( void );

	private:
		int					_fixed_point_number;
		static const int	_n_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif
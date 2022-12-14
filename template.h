
//**************************************************************************//
//                              Constructors                                //
//**************************************************************************//

//**************************************************************************//
//                                 Setters                                  //
//**************************************************************************//

//**************************************************************************//
//                                 Getters                                  //
//**************************************************************************//

//**************************************************************************//
//                             Member functions                             //
//**************************************************************************//

//**************************************************************************//
//                           Operators overload                             //
//**************************************************************************//

//**************************************************************************//
//                               Destructors                                //
//**************************************************************************//

class Fixed{
public:
//Default constructor (Required)
	Fixed ( void );
//Copy constructor (Required)
	Fixed (const Fixed &fixed );
//Constructors
	Fixed ( const int num );
	Fixed ( const float num );
//Default Destructor (Required)
	~Fixed ( void );
//Destructors
//Copy assignment operator (Required)
	Fixed & operator = (const Fixed &fixed);
//Operators
//Swap function
//Setters & Getters
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
//Other functions


	private:
};
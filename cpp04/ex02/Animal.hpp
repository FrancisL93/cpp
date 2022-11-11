#ifndef CPP04_EX02_ANIMAL_HPP
# define CPP04_EX02_ANIMAL_HPP

# include <iostream>

class	Animal {
	private:

	protected: 
		std::string	_type;

	public:
	//Setters
		void	setType( std::string type );
	//Getters
		std::string getType() const;
	//Member functions

	//Operators overload
	
	//Destructors
};

#endif
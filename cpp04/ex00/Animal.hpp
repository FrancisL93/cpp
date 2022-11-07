#ifndef CPP04_EX00_ANIMAL_HPP
# define CPP04_EX00_ANIMAL_HPP

# include <iostream>

class	Animal {
	private:

	protected: 
		std::string	_type;

	public:
	//Setters

	//Getters
		std::string getType() const;
	//Member functions
		void	makeSound() const;
	//Operators overload
		Animal & operator=(Animal const & rhs);
	//Constructors
		Animal();
		Animal( std::string type );
	//Destructors
		virtual ~Animal();
};

#endif
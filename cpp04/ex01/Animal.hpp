#ifndef CPP04_EX01_ANIMAL_HPP
# define CPP04_EX01_ANIMAL_HPP

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
		virtual void	makeSound() const;
	//Operators overload
		Animal & operator=(Animal const & rhs);
	//Constructors
		Animal();
		Animal(Animal &animal);
		Animal( std::string type );
	//Destructors
		virtual ~Animal();
};

#endif
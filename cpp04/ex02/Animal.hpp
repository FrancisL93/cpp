#ifndef CPP04_EX02_ANIMAL_HPP
# define CPP04_EX02_ANIMAL_HPP

# include <iostream>

class	Animal {
	private:

	protected: 
		std::string	_type;
	//Constructors
		Animal();
		Animal(Animal &animal);
		Animal( std::string type );

	public:
	//Setters

	//Getters
		std::string getType() const;
	//Member functions
		virtual void	makeSound() const;
	//Operators overload
		Animal & operator=(Animal const & rhs);
	//Destructors
		virtual ~Animal();
};

#endif
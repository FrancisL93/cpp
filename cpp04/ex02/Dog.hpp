#ifndef CPP04_EX02_DOG_HPP
# define CPP04_EX02_DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal {
	private:
		Brain	*_brain;
	protected:

	public:
	//Member functions
		void	makeSound() const;
	//Operators overload
		Dog & operator=(Dog const & rhs);
	//Constructors
		Dog();
		Dog(Dog &dog);
	//Destructors
		~Dog();
};

#endif
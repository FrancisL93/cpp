#ifndef CPP04_EX02_CAT_HPP
# define CPP04_EX02_CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal {
	private:
		Brain *_brain;
	protected:

	public:
	//Member functions
		void	makeSound() const;
	//Operators overload
		Cat & operator=(Cat const & rhs);
	//Constructors
		Cat();
		Cat(Cat &cat);
	//Destructors
		~Cat();
};

#endif
#ifndef CPP04_EX01_CAT_HPP
# define CPP04_EX01_CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal {
	private:
		Brain *_brain;
	protected:

	public:
		//Member functions
		virtual void	makeSound() const;

		//Constructors
		Cat();
		Cat(Cat &cat);
		//Destructors
		~Cat();

};

#endif
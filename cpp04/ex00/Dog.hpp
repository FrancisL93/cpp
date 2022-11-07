#ifndef CPP04_EX00_DOG_HPP
# define CPP04_EX00_DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal {
	private:

	protected:

	public:
		virtual void	makeSound() const;

		Dog();
		~Dog();

};

#endif
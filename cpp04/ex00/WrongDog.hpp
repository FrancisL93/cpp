#ifndef CPP04_EX00_WRONGDOG_HPP
# define CPP04_EX00_WRONGDOG_HPP

# include "Animal.hpp"

class	WrongDog: public Animal {
	private:

	protected:

	public:
		virtual void	makeSound() const;

		WrongDog();
		~WrongDog();

};

#endif
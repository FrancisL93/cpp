#ifndef CPP04_EX00_WRONGCAT_HPP
# define CPP04_EX00_WRONGCAT_HPP

# include "Animal.hpp"

class	WrongCat: public Animal {
	private:

	protected:

	public:
		virtual void	makeSound() const;

		WrongCat();
		~WrongCat();

};

#endif
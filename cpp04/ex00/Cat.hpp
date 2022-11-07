#ifndef CPP04_EX00_CAT_HPP
# define CPP04_EX00_CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal {
	private:

	protected:

	public:
		virtual void	makeSound() const;

		Cat();
		~Cat();

};

#endif
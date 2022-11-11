#ifndef CPP04_EX03_AMATERIA_HPP
# define CPP04_EX03_AMATERIA_HPP

# include <iostream>

class AMateria {
	private:
	/* Data */
		std::string _type;
	public:
	/* Member functions */
		AMateria(std::string const & type);
	/* Virtual functions */
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& targer);
	/* Setters */
		
	/* Getters */
		std::string const & getType() const;
	/* Constructors */
		AMateria(/* args */);
	/* Destructors */
		~AMateria();
};

#endif
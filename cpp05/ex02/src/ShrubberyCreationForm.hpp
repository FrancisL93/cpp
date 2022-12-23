#ifndef	CPP05_EX02_SHRUBERRY_CREATION_FORM_HPP
# define	CPP05_EX02_SHRUBERRY_CREATION_FORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {
public:
//Default constructor (Required)
	ShrubberyCreationForm(void);
//Copy constructor (Required)
	ShrubberyCreationForm (const ShrubberyCreationForm &copy );
//Constructors
	ShrubberyCreationForm(std::string target);
//Default Destructor (Required)
	~ShrubberyCreationForm();
//Destructors
//Copy assignment operator (Required)
	ShrubberyCreationForm & operator = (const ShrubberyCreationForm &copy);
//Operators
//Swap function
//Setters & Getters
//Other functions
	void	beSigned(Bureaucrat& bureaucrat);
	void	formAction(void) const;

protected:
private:
};

#endif
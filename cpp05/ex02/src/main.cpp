#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	Bureaucrat	a("John", 10);
	ShrubberyCreationForm	b;
	RobotomyRequestForm		c;
	PresidentialPardonForm	d;
	
	try {b.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << b;
	try {c.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << c;
	try {d.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << d;
	a.executeForm(b);
	a.executeForm(c);
	a.executeForm(d);
	return (0);}
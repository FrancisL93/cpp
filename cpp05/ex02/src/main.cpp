#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	Bureaucrat	a("John", 62);
	ShrubberyCreationForm	b;
	RobotomyRequestForm		c;
	PresidentialPardonForm	d;
	
	try {a.executeForm(b);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	try {a.executeForm(c);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	try {a.executeForm(d);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	std::cout << b;
	try {b.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << b;
	try {c.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << c;
	try {d.beSigned(a);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	std::cout << d;
	try {a.executeForm(b);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	try {a.executeForm(c);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	try {a.executeForm(d);}
	catch (Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
	catch (Form::NoSignatureException& e) {std::cout << e.what() << std::endl;}
	return (0);}
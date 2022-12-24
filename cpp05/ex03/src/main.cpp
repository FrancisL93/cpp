#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	Intern a;

	try {a.makeForm("robotomy re12quest", "bender");}
	catch(Intern::FormDoesntExist& e) {std::cout << e.what() << std::endl;}
	return (0);}
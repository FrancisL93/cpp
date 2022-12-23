#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat	a("John", 50);
	Form		b("Application", 50, 49);
	Form		c("Application", 49, 49);

	a.signForm(b);
	a.signForm(c);
	return (0);}
#include <iostream>
#include "Base.hpp"

/*It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation*/
Base	*generate(void) {
	srand(time(nullptr));
	switch (rand() % 3) {
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);}
	return (new A);
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".
void	identify(Base* p) {
	switch (p->getType()) {
		case 0:
			std::cout << "A" << std::endl;
			break;
		case 1:
			std::cout << "B" << std::endl;
			break;
		case 2:
			std::cout << "C" << std::endl;
			break;
	}
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
// inside this function is forbidden.
void	identify(Base& p) {
	switch (p.getType()) {
		case 0:
			std::cout << "A" << std::endl;
			break;
		case 1:
			std::cout << "B" << std::endl;
			break;
		case 2:
			std::cout << "C" << std::endl;
			break;
	}
}

int	main(void) {
	Base	*p = generate();

	identify(p);
	identify(*p);
	delete (p);
	return (0);
}
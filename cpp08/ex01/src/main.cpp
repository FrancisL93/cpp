# include "../inc/Span.hpp"
# include <cstdlib>
# include <ctime>

int	main(void) {
	Span s = Span(10);

	s.addNumber(6);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl << std::endl;

	int array[] = {1, 2, 3, 4, 5};
	std::vector<int> vectArray(array, array + sizeof(array) / sizeof(int));
	try {s.addNumbers(vectArray.begin(), vectArray.end());}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl << std::endl;

	Span sp = Span(25000);
	std::srand(std::time(nullptr));
	for (int i = 0; i < 25000; i++) {
		sp.addNumber(std::rand());}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span a;

	try {a.shortestSpan();}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;}
	try {s.addNumbers(vectArray.begin(), vectArray.end());}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	return 0;
}
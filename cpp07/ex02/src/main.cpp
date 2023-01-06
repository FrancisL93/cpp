#include <iostream>
#include "../include/Array.hpp"

int main( void ) {
	Array<int> a(5);

	std::cout << a.getData(0);

	return (0);
}
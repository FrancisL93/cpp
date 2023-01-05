#include <iostream>
#include <cstddef>
#include "Data.hpp"


uintptr_t	serialize(Data* ptr) {return (reinterpret_cast<uintptr_t>(ptr));}

Data*	deserialize(uintptr_t raw) {return (reinterpret_cast<Data*>(raw));}

int	main(void) {
	Data 		data;
	uintptr_t	serialized = serialize(&data);
	Data*		deserialized = deserialize(serialized);

	if (deserialized == &data) {
		std::cout << "success" << std::endl;}
	else {
		std::cout << "failure" << std::endl;}
}
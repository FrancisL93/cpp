#ifndef ARRAY_HPP
 #define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array {
public:
//Default constructor (Required)
Array() : data(NULL), size(0) {}
//Copy constructor (Required)
Array (const Array<T> &copy) : data(new T[copy.size]), size(copy.size) {
	for (unsigned int i = 0; i < copy.size; i++) {
		data[i] = copy.data[i];}
}
//Constructors
Array(unsigned int n) : data(new T[n]()), size(n) {}
//Default Destructor (Required)
~Array() {delete [] data;}
//Destructors
//Copy assignment operator (Required)
Array<T> & operator = (const Array<T> &copy) {
	if (this != copy) {
		delete[] data;
		data = new T[copy.size];
		size = copy.size;
		for (unsigned int i = 0; i < copy.size; i++) {
			data[i] = copy.data[i];}
	}
	return (*this);};
//Operators
T	&operator[](unsigned int index) {
	if (index >= size) {
		throw std::out_of_range("Array index is out of bounds");}
	return (data[index]);}
//Swap function
//Setters & Getters
	T	getData(unsigned int index) {
		if (index >= size) {
			throw std::out_of_range("Array index is out of bounds");}
		return (data[index]);}
	unsigned int	getSize() const {return (size);}
//Other functions
protected:

private:
	T*				data;
	unsigned int	size;
};

#endif

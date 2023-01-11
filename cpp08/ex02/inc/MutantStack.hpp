#ifndef MUTANTCLASS_HPP
 #define MUTANTCLASS_HPP

# include <iostream>
# include <vector>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
//Default constructor (Required)
	MutantStack<T>() {}
//Copy constructor (Required)
	MutantStack<T>(const MutantStack &copy) {*this = copy;}
//Constructors
//Default Destructor (Required)
	~MutantStack<T>() {}
//Destructors
//Copy assignment operator (Required)
	MutantStack & operator = (const MutantStack &copy) {
		if (this != copy) {}
		return (*this);}
//Operators
 operator std::stack<T>() {
        std::stack<T> result;
        while (!this->empty()) {
            result.push(this->top());
            this->pop();}
        return result;}
//Swap function
//Setters & Getters
//Other functions
	iterator begin() {return (this->c.begin());}
	iterator end() {return (this->c.end());}
	iterator cbegin() const {return (this->c.cbegin());}
	iterator cend() const {return (this->c.cend());}

protected:

private:
};

#endif
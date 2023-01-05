#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {
public:
	virtual ~Base(){};
	virtual int getType(void) const = 0;
};

class A: public Base {
	public:
		int getType(void) const {return (0);}
};
class B: public Base {
	public:
		int getType(void) const {return (1);}
};
class C: public Base {
	public:
		int getType(void) const {return (2);}
};

#endif
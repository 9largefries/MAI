#ifndef Trapeze_H
#define Trapeze_H

#include <iostream>

using namespace std;

class Trapeze {
public:
	Trapeze();
	Trapeze(size_t i, size_t j, size_t k);
	~Trapeze();

	double Square();
	void print();
	bool prov();
	Trapeze& operator = (Trapeze &add);

	friend bool operator == (Trapeze &k1, Trapeze &k2);
	friend ostream& operator << (ostream& os, Trapeze &pt);
	friend istream& operator >> (istream& os, Trapeze &pr);

private:
	size_t a;
	size_t b;
	size_t h;

};

#endif #pragma once

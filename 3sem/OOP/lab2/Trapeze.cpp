#include "Trapeze.h"
using namespace std;

Trapeze::Trapeze() 
{
	a = -1;
	b = -1;
	h = -1;
}

Trapeze::Trapeze(size_t i, size_t j, size_t k) : a(i), b(j), h(k)
{}

Trapeze::~Trapeze() {}

double Trapeze::Square() {
	return (double(a + b) / 2.0) * double(h);
}

void Trapeze::print() {
	cout << "Side a: " << a << endl;
	cout << "Side b: " << b << endl;
	cout << "Height: " << h << endl;
	cout << "Square = " << Square() << endl;
}

bool Trapeze::prov()
{
	if ((a == -1) & (b == -1) & (h == -1)) return 0;
	else return 1;
}

Trapeze& Trapeze::operator=(Trapeze &add)
{
	if (*this == add) return *this;
	a = add.a;
	b = add.b;
	h = add.h;
	return add;
}

bool operator==(Trapeze & k1, Trapeze & k2)
{
	if (k1.a == k2.a) return 1;
	else return 0;
}

ostream& operator<<(ostream& os, Trapeze &pt)
{
	os << "Side a = " << pt.a << endl;
	os << "Side b = " << pt.b << endl;
	os << "Height = " << pt.h << endl;
	
	return os;
}

istream& operator >> (istream& os, Trapeze &pr)
{
	cout << "Enter side a = " << endl;
	os >> pr.a;
	cout << "Enter side b = " << endl;
	os >> pr.b;
	cout << "Enter height = " << endl;
	os >> pr.h;
	return os;
}
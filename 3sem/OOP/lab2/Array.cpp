#include "Array.h"

Array::Array(int a)
{
	real_size = a;
	size = 0;
	arr = new Trapeze[a];
}

Array::Array()
{
	real_size = 10;
	size = 0;
	arr = new Trapeze[10];
}

Array::~Array()
{
	cout << "Array delete." << endl;
	delete[] arr;
}

Trapeze& Array::operator[](int i)
{
	return arr[i];
}

void Array::push(Trapeze & kv)
{
	if (check()) {
		resize();
	}
	arr[size] = kv;
	size++;
}

void Array::del(int i)
{
	if (i >= size || i < 0) {
		cout << "Error: element number " << i << " does not exist in array." << endl;
	}
	else {
		Trapeze *ne;
		ne = new Trapeze[size + (real_size - size) / 2];
		int k = 0;
		for (int j = 0; j < size; j++) {
			if (j != i) {
				ne[k] = arr[j];
				k++;
			}
		}
		real_size = size + (real_size - size) / 2;
		size--;
		delete[] arr;
		arr = ne;
	}
}

int Array::isize()
{
	return size;
}

bool Array::check()
{
	if (size == real_size - 1) return 1;
	else return 0;
}

void Array::resize()
{
	Trapeze *ne;
	real_size *= 2;
	ne = new Trapeze[real_size];
	for (int i = 0; i < size; i++) {
		ne[i] = arr[i];
	}
	delete[] arr;
	arr = ne;
}

ostream & operator<<(ostream & os, Array &re)
{
	for (int i = 0; i < re.isize(); i++) {
		if (re[i].prov()) {
			os << "Figure number " << i << endl << "    " << re[i];
		}
	}
	return os;
}
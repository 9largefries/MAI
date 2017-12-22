#ifndef ARRAY_H
#define ARRAY_H

#include "Trapeze.h"

class Array {
public:
	Array(int);
	Array();
	~Array();

	Trapeze& operator[](int);
	void push(Trapeze &kv);
	void del(int i);
	int isize();

	friend ostream& operator<<(ostream& os, Array &re);
	bool check();
	void resize();

private:
	Trapeze *arr;
	int size;
	int real_size;
};

#endif#pragma once

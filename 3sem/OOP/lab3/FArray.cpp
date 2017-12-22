#include "FArray.h"

FArray::FArray()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = ArrayItem();
	}
}

void FArray::Insert(std::shared_ptr<Pentagon> &pentagon, int index)
{
	a[index] = ArrayItem(pentagon);
}

void FArray::Insert(std::shared_ptr<Rhombus> &rhombus, int index)
{
	a[index] = ArrayItem(rhombus);
}

void FArray::Insert(std::shared_ptr<Trapeze> &trapeze, int index)
{
	a[index] = ArrayItem(trapeze);
}

bool FArray::IsPentagon(int index)
{
	return a[index].IsPentagon();
}

bool FArray::IsRhombus(int index)
{
	return a[index].IsRhombus();
}

bool FArray::IsTrapeze(int index)
{
	return a[index].IsRhombus();
}

std::shared_ptr<Pentagon> FArray::GetPentagon(int index)
{
	return a[index].GetPentagon();
}

std::shared_ptr<Rhombus> FArray::GetRhombus(int index)
{
	return a[index].GetRhombus();
}

std::shared_ptr<Trapeze> FArray::GetTrapeze(int index)
{
	return a[index].GetTrapeze();
}

void FArray::Delete(int index)
{
	a[index] = ArrayItem();
}

std::ostream& operator << (std::ostream &os, FArray &array)
{
	for (int i = 0; i < size; i++)
	{
		os << "[" << i << "] " << array.a[i] << std::endl;
	}
	return os;
}

FArray::~FArray()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = ArrayItem();
	}
}
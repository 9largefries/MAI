#include "ArrayItem.h"

template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem() :
	pentagon(nullptr),
	rhomb(nullptr),
	trapeze(nullptr),
	square(0) {}
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(int index) :
	pentagon(nullptr),
	rhomb(nullptr),
	trapeze(nullptr),
	square(0),
	index(index) {}
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T1> &pentagon, int index) :
	pentagon(pentagon),
	rhomb(nullptr),
	trapeze(nullptr),
	index(index)
{
	square = pentagon->Square();
}

template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T2> &rhomb, int index) :
	pentagon(nullptr),
	rhomb(rhomb),
	trapeze(nullptr),
	index(index)
{
	square = rhomb->Square();
}

template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T3> &trapeze, int index) :
	pentagon(nullptr),
	rhomb(nullptr),
	trapeze(trapeze),
	index(index)
{
	square = trapeze->Square();
}

template <class T1, class T2, class T3> bool ArrayItem<T1, T2, T3>::IsPentagon()
{
	if (pentagon != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3> bool ArrayItem<T1, T2, T3>::IsRhomb()
{
	if (rhomb != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3> bool ArrayItem<T1, T2, T3>::IsTrapeze()
{
	if (trapeze != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3> std::shared_ptr<T1> ArrayItem<T1, T2, T3>::GetPentagon()
{
	return this->pentagon;
}
template <class T1, class T2, class T3> std::shared_ptr<T2> ArrayItem<T1, T2, T3>::GetRhomb()
{
	return this->rhomb;
}
template <class T1, class T2, class T3> std::shared_ptr<T3> ArrayItem<T1, T2, T3>::GetTrapeze()
{
	return this->trapeze;
}
template <class T1, class T2, class T3> void ArrayItem<T1, T2, T3>::SetIndex(int index)
{
	ArrayItem<T1, T2, T3>::index = index;
}

template <class T1, class T2, class T3> int ArrayItem<T1, T2, T3>::GetIndex()
{
	return index;
}

template <class T1, class T2, class T3> std::ostream& operator << (std::ostream &os, ArrayItem<T1, T2, T3> &item)
{
	if (item.IsPentagon()) os << *item.pentagon << "\nSquare = " << item.square << " (I am pentagon)";
	else if (item.IsRhomb()) os << *item.rhomb << "\nSquare = " << item.square << " (I am rhomb)";
	else if (item.IsTrapeze()) os << *item.trapeze << "\nSquare = " << item.square << " (I am trapeze)";
	else os << "Empty";
	return os;
}


#include "Pentagon.h"
#include "Rhomb.h"
#include "Trapeze.h"

template class ArrayItem<Pentagon, Rhomb, Trapeze>;
template std::ostream& operator<<(std::ostream& os, ArrayItem<Pentagon, Rhomb, Trapeze>& obj);

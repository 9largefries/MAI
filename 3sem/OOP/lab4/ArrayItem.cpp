#include "ArrayItem.h"

template <class T1, class T2, class T3>
ArrayItem<T1, T2, T3>::ArrayItem() :
	pentagon(nullptr),
	rhomb(nullptr),
	trapeze(nullptr) {}

template <class T1, class T2, class T3>
ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T1> &pentagon) :
	pentagon(pentagon),
	rhomb(nullptr),
	trapeze(nullptr) {}

template <class T1, class T2, class T3>
ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T2> &rhomb) :
	pentagon(nullptr),
	rhomb(rhomb),
	trapeze(nullptr) {}

template <class T1, class T2, class T3>
ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T3> &trapeze) :
	pentagon(nullptr),
	rhomb(nullptr),
	trapeze(trapeze) {}

template <class T1, class T2, class T3>
bool ArrayItem<T1, T2, T3>::IsPentagon()
{
	if (pentagon != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3>
bool ArrayItem<T1, T2, T3>::IsRhomb()
{
	if (rhomb != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3>
bool ArrayItem<T1, T2, T3>::IsTrapeze()
{
	if (trapeze != nullptr) return true;
	else return false;
}

template <class T1, class T2, class T3>
std::shared_ptr<T1> ArrayItem<T1, T2, T3>::GetPentagon()
{
	return this->pentagon;
}

template <class T1, class T2, class T3>
std::shared_ptr<T2> ArrayItem<T1, T2, T3>::GetRhomb()
{
	return this->rhomb;
}

template <class T1, class T2, class T3>
std::shared_ptr<T3> ArrayItem<T1, T2, T3>::GetTrapeze()
{
	return this->trapeze;
}

template <class T1, class T2, class T3>
std::ostream& operator << (std::ostream &os, ArrayItem<T1, T2, T3> &item)
{
	if (item.IsPentagon()) os << *item.pentagon << " (I am pentagon)";
	else if (item.IsRhomb()) os << *item.rhomb << " (I am rhomb)";
	else if (item.IsTrapeze()) os << *item.trapeze << " (I am trapeze)";
	else os << "Empty";
	return os;
}

template <class T1, class T2, class T3>
ArrayItem<T1, T2, T3>::~ArrayItem()
{}
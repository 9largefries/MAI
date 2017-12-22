#include "TreeItem.h"

template <class T>
TreeItem<T>::TreeItem() : value(NULL)
{
	for (int i = 0; i < max_children_size; i++) children[i] = nullptr;
}

template <class T>
TreeItem<T>::TreeItem(T v) : value(v)
{
	for (int i = 0; i < max_children_size; i++) children[i] = nullptr;
}

template <class T>
bool TreeItem<T>::IsLeaf()
{
	bool flag = 1;
	for (int i = 0; i < max_children_size; i++)
	{
		if (children[i]) flag = 0;
	}
	return flag;
}

#include <functional>
template class TreeItem<std::function<void(void)>>;
template std::ostream& operator << (std::ostream &os, TreeItem<std::function<void(void)>> item);
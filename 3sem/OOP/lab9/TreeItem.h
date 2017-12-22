#pragma once
#ifndef TREEITEM_H
#define TREEITEM_H

#include <thread>

const int max_children_size = 4; // ������������ ����� �����

template <class T>
class TreeItem
{
public:
	// ������������
	TreeItem();
	TreeItem(T v);

	bool IsLeaf(); // ��������, �������� �� ������

	T value; // ��������
	TreeItem<T>* children[max_children_size]; // ������ ���������� �� �����

private:
};
#endif
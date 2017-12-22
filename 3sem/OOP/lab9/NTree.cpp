#include "NTree.h"
#include <queue>
#include <iostream>

template <class T>
NTree<T>::NTree() :
	root(nullptr),
	size(0) {}

template <class T>
TreeItem<T>* NTree<T>::Insert(TreeItem<T>* root, T value)
{
	std::queue <TreeItem<T>*> nodes_to_visit;
	TreeItem<T>* current_node;
	if (!root)
	{
		root = new TreeItem<T>(value);
		return root;
	}
	else
	{
		nodes_to_visit.push(root);
	}
	while (!nodes_to_visit.empty())
	{
		current_node = nodes_to_visit.front();
		nodes_to_visit.pop();

		for (int i = 0; i<max_children_size; i++)
		{
			if (!current_node->children[i])
			{
				current_node->children[i] = new TreeItem<T>(value);
				return root;
			}
			else nodes_to_visit.push(current_node->children[i]);
		}
	}
}

#include <functional>
template class NTree<std::function<void(void)>>;

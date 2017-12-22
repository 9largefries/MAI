#include <iostream>
#include <cstdlib>
#include <random>
#include <functional>
#include <future>
#include <thread>
#include <queue>

#include "FigureArray.h"
#include "NTree.h"
#include "Pentagon.h"
#include "Rhomb.h"
#include "Trapeze.h"

const int array_size = 10;

typedef std::function<void(void)> command;
FigureArray <Pentagon, Rhomb, Trapeze> figure_array(array_size); // �������� ������� �����
NTree<command> tree; // �������� ������ ������

//����� � ������ ������ ������ � �� ���������� 
void Executing(TreeItem<command> *root)
{
	std::queue <TreeItem<command>*> nodes_to_visit;
	TreeItem<command>* current_node;
	nodes_to_visit.push(root);
	while (!nodes_to_visit.empty())
	{
		current_node = nodes_to_visit.front();
		nodes_to_visit.pop();

		command cmd = current_node->value;
		cmd();

		for (int i = 0; i < max_children_size; i++)
		{
			if (current_node->children[i])
			{
				nodes_to_visit.push(current_node->children[i]);
			}
		}
	}
}

int main()
{
	int pos = 0;
	// ������-������� �������
	command cmd_insert = [&]()
	{
		int n;
		std::cout << "number of figures: ";
		std::cin >> n;
		for (int i = 0; i < n; i++)
		{
			int figure_number = rand() % 3;
			int a = rand() % 10;
			int b = rand() % 10;
			int c = rand() % 10;
			int d = rand() % 10;

			if (figure_number == 0) 
				figure_array.Insert(std::shared_ptr<Pentagon>(new Pentagon(a, b, c, d)), pos);
			else if (figure_number == 1) 
				figure_array.Insert(std::shared_ptr<Rhomb>(new Rhomb(a, b)), pos);
			else if (figure_number == 2) 
				figure_array.Insert(std::shared_ptr<Trapeze>(new Trapeze(a, b, c)), pos);
			pos++;
		}
	};

	// ������-������� �������� �� �������
	command cmd_delete_by_square = [&]()
	{
		int square;
		std::cout << "Enter square: ";
		std::cin >> square;
		figure_array.DeleteBySquare(square);
	};

	// ������-������� ������
	command cmd_print = [&]()
	{
		std::cout << "Figure array:\n" << figure_array;
	};

	//������� ������ � ������ ������
	tree.root = tree.Insert(tree.root, cmd_insert);
	tree.root = tree.Insert(tree.root, cmd_insert);
	tree.root = tree.Insert(tree.root, cmd_insert);
	tree.root = tree.Insert(tree.root, cmd_print);
	tree.root = tree.Insert(tree.root, cmd_delete_by_square);
	tree.root = tree.Insert(tree.root, cmd_print);

	//����� ������ � ����������
	Executing(tree.root);

	system("pause");

	return 0;
}
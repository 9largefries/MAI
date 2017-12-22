#include <iostream>
#include <cstdlib>
#include "Pentagon.h"
#include "Rhomb.h"
#include "Trapeze.h"
#include "NTreeArray.cpp"
//#include "Iterator.cpp"
int main()
{
	int x = 4;
	NTreeArray<Pentagon, Rhomb, Trapeze> ntree_array(10);
	while (true)
	{
		std::cout << "============================" << std::endl;
		std::cout << "Menu:\n1 - Add figure,\n2 - Print all, \n3 - Delete, \n0 - Exit" << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> x;

		if (x > 3)
		{
			std::cout << "============================" << std::endl;
			std::cout << "Incorrect command" << std::endl;
			continue;
		}

		if (x == 0)
			break;

		switch (x)
		{
		case 1:
		{
			std::cout << "============================" << std::endl;
			char figure_name;
			std::cout << "enter figure name (p - pentagon, r - rhomb, t - trapeze): ";
			std::cin >> figure_name;
			if (figure_name == 'p') 
				ntree_array.Insert((std::shared_ptr<Pentagon>)(new Pentagon(std::cin)));
			else if (figure_name == 'r') 
				ntree_array.Insert(std::shared_ptr<Rhomb>(new Rhomb(std::cin)));
			else if (figure_name == 't') 
				ntree_array.Insert(std::shared_ptr<Trapeze>(new Trapeze(std::cin)));
			break;
		}

		case 2:
		{
			std::cout << "============================" << std::endl;
			ntree_array.Display();
			break;
		}

		case 3:
		{
			std::cout << "============================" << std::endl;
			char c;
			std::cout << "[s]-by square, [t]-by type: ";
			std::cin >> c;
			if (c == 's')
			{
				double square;
				std::cout << "enter square: ";
				std::cin >> square;
				ntree_array.DeleteBySquare(square);
			}
			else if (c == 't')
			{
				char type;
				std::cout << "enter figure type (p - pentagon, r - rhomb, t - trapeze): ";
				std::cin >> type;
				ntree_array.DeleteByType(type);
			}

			break;
		}
		}
	}

	return 0;
}
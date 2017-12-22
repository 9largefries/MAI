#include <iostream>
#include <cstdlib>
#include "Trapeze.h"
#include "FArray.h"


int main()
{
	int x = 6;
	int i, num;
	FArray figure_array;

	while (true)
	{
		std::cout << "========================" << std::endl;
		std::cout << "Menu:" << std::endl;
		std::cout << "1) Add figure" << std::endl;
		std::cout << "2) Print figure" << std::endl;
		std::cout << "3) Delete figure" << std::endl;
		std::cout << "4) Print array" << std::endl;
		std::cout << "5) Exit" << std::endl;
		std::cout << "========================" << std::endl;

		std::cout << "Choose action: ";
		std::cin >> num;

		if (num > 5)
		{
			std::cout << "Error, put another number " << std::endl;
			continue;
		}

		if (num == 5)
			break;

		switch (num)
		{

		case 1:
		{
			std::cout << "========================" << std::endl;
			std::cout << "You chose 1) Add figure" << std::endl;
			char figure_name;
			std::cout << "Enter figure name ([p]-pentagon, [r]-rhombus, [t]-trapeze): ";
			std::cin >> figure_name;
			std::cout << "Enter index: ";
			std::cin >> i;
			if (figure_name == 'p') 
				figure_array.Insert(std::shared_ptr<Pentagon>(new Pentagon(std::cin)), i);
			else if (figure_name == 'r') 
				figure_array.Insert(std::shared_ptr<Rhombus>(new Rhombus(std::cin)), i);
			else if (figure_name == 't') 
				figure_array.Insert(std::shared_ptr<Trapeze>(new Trapeze(std::cin)), i);

			break;
		}

		case 2:
		{
			std::cout << "========================" << std::endl;
			std::cout << "You chose 2) Print figure" << std::endl;
			std::cout << "Enter index: ";
			std::cin >> i;

			if (figure_array.IsPentagon(i)) 
				std::cout << *figure_array.GetPentagon(i) << std::endl;
			else if (figure_array.IsRhombus(i)) 
				std::cout << *figure_array.GetRhombus(i) << std::endl;
			else if (figure_array.IsTrapeze(i)) 
				std::cout << *figure_array.GetTrapeze(i) << std::endl;
			else 
				std::cout << "Empty element" << std::endl;

			break;
		}

		case 3: 
		{
			std::cout << "========================" << std::endl;
			std::cout << "You chose 3) Delete figure" << std::endl;
			std::cout << "enter index: ";

			std::cin >> i;
			figure_array.Delete(i);

			break;
		}

		case 4:
		{
			std::cout << "========================" << std::endl;
			std::cout << "You chose 4) Print array" << std::endl;
			std::cout << "Figure array:\n" << figure_array;

			break;
		}
		}
	}

	return 0;
}
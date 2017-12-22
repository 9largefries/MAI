#include <cstdlib>
#include "Trapeze.h"
#include "Rhomb.h"
#include "Pentagon.h"


int main(int argc, char** argv)
{
	int num;
	while (true)
	{
		std::cout << "==========================" << std::endl;
		std::cout << "Menu: " << std::endl;
		std::cout << "1) Trapeze" << std::endl;
		std::cout << "2) Rhomb" << std::endl;
		std::cout << "3) Pentagon" << std::endl;
		std::cout << "4) Exit" << std::endl;
		std::cout << "==========================" << std::endl;

		std::cout << "Choose action: " << std::endl;
		std::cin >> num;
		std::cin.ignore();

		if (num == 4)
			break;

		if (num > 3)
		{
			std::cout << "==========================" << std::endl;
			std::cout << "Error, put another number" << std::endl;
			continue;
		}

		switch (num)
		{
		case 1:
		{
			std::cout << "==========================" << std::endl;
			std::cout << "You chose 1) Trapeze" << std::endl;
			Figure *ptr = new Trapeze(std::cin);
			ptr->Print();
			std::cout << "Square = " << ptr->Square() << std::endl;

			delete ptr;

			break;
		}

		case 2:
		{
			std::cout << "==========================" << std::endl;
			std::cout << "You chose 2) Rhomb" << std::endl;
			Figure *ptr = new Rhomb(std::cin);
			ptr->Print();
			std::cout << "Square = " << ptr->Square() << std::endl;

			delete ptr;

			break;
		}

		case 3:
		{
			std::cout << "==========================" << std::endl;
			std::cout << "You chose 3) Pentagon" << std::endl;
			Figure *ptr = new Pentagon(std::cin);
			ptr->Print();
			std::cout << "Square = " << ptr->Square() << std::endl;

			delete ptr;

			break;
		}
		}
	}
	return 0;
}
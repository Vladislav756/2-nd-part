#include <iostream>

int main()
{
	int first_number = 0;
	
	int second_nubmer = 0;

	int action = 0;

	std::cout << "This is default calculator\n";

	std::cout << "Incert two numbers\n";

	std::cin >> first_number >> second_nubmer;

	std::cout << "Choose action:\n 1 - + \n 2 - - \n 3 - * \n 4 - : \n";

	std::cin >> action;

	switch (action)
	{
	case 1:
	{
		std::cout << first_number + second_nubmer;
		break;
	}

	case 2:
	{
		std::cout << first_number - second_nubmer;
		break;
	}

	case 3:
	{
		std::cout << first_number * second_nubmer;
		break;
	}

	case 4:
	{
		std::cout << first_number / second_nubmer;
		break;
	}
	default:
		std::cout << "Something wrong";
		break;
	}

	return 0;
}
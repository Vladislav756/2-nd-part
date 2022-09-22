#include <iostream>

int main()
{

    int day_number = 0;

    std::cout << "This program shows days depending on his order \n";

	std::cin >> day_number;

	switch (day_number)
	{
	case 1:
		{
		std::cout << "It's Monday";
		break;
		}

	case 2:
	{
		std::cout << "It's Tuesday";
		break;
	}

	case 3:
	{
		std::cout << "It's Wednesday";
		break;
	}

	case 4:
	{
		std::cout << "It's Thursday";
		break;
	}

	case 5:
	{
		std::cout << "It's Friday";
		break;
	}

	case 6:
	{
		std::cout << "It's Saturday";
		break;
	}

	case 7:
	{
		std::cout << "It's Sunday";
		break;
	}
	default:
		std::cout << "Something wrong";
		break;
	}

	return 0;
}





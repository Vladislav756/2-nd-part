#include <iostream>

int main()
{
   
	const int SIZE = 20;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 100;
	}

	std::cout << "Incert number, if it present, than it will appears in index element" << "\n";

	int number = 0;

	std::cin >> number;

	for (int j = 0; j < SIZE; j++)

		if (number == arr[j])
		{
			std::cout << j << "\n";
		}
		/*else
		{
			std::cout << "Number is not present";
		}*/

	return 0;
}

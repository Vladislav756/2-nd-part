#include <iostream>

int main()
{
	const int ROWS = 3;
	const int COLUMN = 3;

	int arr[ROWS][COLUMN];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			arr[i][j] = rand();
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	int x = 0;
	int y = 0;

	std::cin >> x >> y;

	std::cout << arr[x][y];


	return 0;
}

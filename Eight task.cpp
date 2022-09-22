#include <iostream>

int main()
{
   
	//—оздайте массив целых чисел из 20 элементов и заполните его рандомными числами от 0 до 100. 
	//Ќапишите программу, котора€ получает число от 0 до 100 от пользовател€ и выводит в консоль есть ли это число в массиве и если есть, то должен быть выведен индекс элемента. 
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
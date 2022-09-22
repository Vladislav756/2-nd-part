#include <iostream>

int main()
{
    const int size = 20;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20000 - 10000;
    }
    for (int j = 0; j < size; j++)
        
        if (arr[j] % 3 == 0 || arr[j + 1] % 3 == 0)
        {
            std::cout << arr[j] << "\n"; /*<< arr[i + 1] << "\n"; - тут второй вывод нужен или только 1 хватит?*/
        }
        /*else
        {
            std::cout << "Not here" << "\n";
        }*/
return 0;
}

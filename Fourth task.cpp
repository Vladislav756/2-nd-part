#include <iostream>

int main()
{
    const int COUNT = 4;

    int arr[COUNT];
    
    int sum = 0;

    std::cout << "Insert 4 numbers \n";

    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    std::cout << arr[0] << "\n" << arr[3] << "\n" << sum << "\n";

}


//дефолтный массив сделать


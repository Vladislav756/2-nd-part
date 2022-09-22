#include <iostream>

int main()
{
    std::cout << "Program to check PIN\n";
    int first = 4;
    int second = 8;
    int third = 3;
    int forth = 5;
    
    int tryes = 0;
    
    int p_first = 0;
    int p_second = 0;
    int p_third = 0;
    int p_forth = 0;

    while (tryes < 5)
    {

        std::cin >> p_first >> p_second >> p_third >> p_forth;

        if (first == p_first && second == p_second && third == p_third && forth == p_forth)
        {
            std::cout << "Succes \n";
        }
        else
        {

            std::cout << "Fail \n";

            tryes++;
        }
    
    }


    std::cout << "Tryes over";

    return 0;
}


#include <iostream>

int main()
{
   int number;
   const int CHISLA = 100;

   std::cin >> number;

   for (int i = 0; i < CHISLA; i++)
   {
	   number +=1;

	   std::cout << number << "\n";
   }

   return 0;
}

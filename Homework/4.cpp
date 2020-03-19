#include <iostream>

using namespace std;

int main()
{
   float x;
   std::cout << "Solve function. \n"
                   "Enter x: ";
      std::cin >> x;

      float f = abs(x)+x*x*x*x*x;

      std::cout << "x = " << x << std::endl
                   << "f = " << f << std::endl;
         std::getchar();
         std::getchar();

         return 0;

}

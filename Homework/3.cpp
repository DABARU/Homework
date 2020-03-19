#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1;
        float num2;
            float num3;

    std::cout << "Enter three numbers: ";
      std::cin >> num1 >> num2 >> num3;

      float prod = num1*2;
      float min = num2 - 3;
      float kv = num3*num3;
      float sum= prod+min+kv;
      std::setprecision(7);
      std::cout << "Prod = " << prod << std::endl
                << "Min = " << min << std::endl
                << "Kv = " << kv << std::endl
                << "Sum = " << sum << std::endl;
      return 0;
}

#include <iostream>

using namespace std;
int Volume(double liters,double cubes,double barrels);

int main()
{
    double liters, cubes, barrels;
    std::cout<<"Enter date:\n";
    std::cin>> liters;
    std::cout<<std::endl;

    std::cout<<"Select the measurements\n";
    int choice;
      std::cout<<"1-Lit\n2-Cub\n3-Barr\n";
      std::cin>>choice;
       if
}
        return 0;

}
int Volume(double liters,double cubes,double barrels){
    std::cout<<"Liters "<<liters<<"Lt= "<<std::endl;
    std::cout<<liters*0.001<<"Cub="<<std::endl;
    std::cout<<liters*0.0063<<"Barr="<<std::endl;
    return 0;
}

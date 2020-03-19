#include <iostream>
using namespace std;
int main(){
    int a,b,c,max,min;
        std::cout<<"Enter 1 integer"<<std::endl;
            std::cin>>a;
        std::cout<<"Enter 2 integer"<<std::endl;
            std::cin>>b;
        std::cout<<"Enter 3 integer"<<std::endl;
            std::cin>>c;
        a>b ? (max=a) : (max=b);
            max>c ? max=max : max=c;
        std::cout<<"Max ="<<max<<std::endl;

        std::cout<<"Summa="<<max+5<<std::endl;

        a<b ? (min=a) : (min=b);
            min<c ? min=min : max=c;
            std::cout<<"Min ="<<min<<std::endl;

            std::cout<<"Subtraction="<<min-3<<std::endl;
        return 0;


}

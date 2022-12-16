#include <iostream>
#include <string>
using namespace std;

int factorial (int num);

int main ()
{
    std::cout<< "Hello World"<<std::endl;
    std::cout<< "This is branch Testing" << std::endl;
    
    int num=0;

    do{
        std::cout << "Enter positive integer: " << std::endl;
        cin>>num;

    }
    while(num<0);
    int factorial;
    for (int i=i;i<=num;i++)
    {
        factorial = factorial *i;
    }
    std::cout<< num << " !"
    return 0;
}
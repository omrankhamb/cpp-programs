#include<iostream>

int main()
{
    int x = 12;
    // No separate memory allocation
    int &y = x;
    std::cout<<y<<"\n";
    return 0;
}
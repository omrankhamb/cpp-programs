#include<iostream>

namespace Marvellous
{
    void Marvellous_Printer()
    {
        printf("Marvellous namespace created\n");
    }
    
}

using namespace std;
using namespace Marvellous;

int main()
{
    Marvellous_Printer();
    return 0;
}
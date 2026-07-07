#include<iostream>

namespace Input_string
{
    void IO_string(char *arr)
    {
        scanf("%[^'\n']s",arr);
    }
    
}

using namespace std;
using namespace Input_string;

int main()
{
    char Arr[20];
    cout<<"Enter String \n";
    IO_string(Arr);
    cout<<Arr;

    
    return 0;
}
#include<iostream>
#include<string.h>

namespace InputString
{
    void IO(char *Arr)
    {
        scanf("%[^'\n']s",Arr);
    }
};
using namespace std;
using namespace InputString;
int main()
{
    char Arr[30];
    cout<<"Enter A String : ";
    
    IO(Arr);
    cout<<Arr;
    return 0;

}
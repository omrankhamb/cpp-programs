#include<iostream>
#include"StringX.h"


namespace ownnamespace
{
    void IO(char *Arr)
    {
        scanf(" %[^\n]s", Arr);
    }
};

using namespace std;
using namespace ownnamespace;
int main()
{
    char Arr[30];
    char Arr2[30];

    int iRet = 0;

    cout<<"Enter String : ";
    IO(Arr);

    cout<<Arr;
    return 0;
}
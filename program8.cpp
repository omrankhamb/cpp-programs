#include<iostream>
using namespace std;
// Array in c++

int main()
{
    int Arr[10];

    for(int i = 0 ; i<= 10 ; i++)
    {
        Arr[i] = i;
    }

    for(int i = 0 ; i <= 10 ; i++)
    {
        cout<<Arr[i]<<endl;
    }
    return 0;
}
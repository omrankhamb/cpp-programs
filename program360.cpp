#include<iostream>
using namespace std;



int main()
{
    int Arr[] = {1,2,3,5,4,6,7,9,8};

    int n = sizeof(Arr)/sizeof(Arr[0]);

    for(int i = 0 ; i <  n ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
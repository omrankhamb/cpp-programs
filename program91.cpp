#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[10];
//  int *arr = (int*)malloc(sizeof(int)*10);

    for(int i = 0 ; i < 10 ; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i]<<"\n";

    }

    delete []arr;

    cout<<"End of main\n";
    return 0;
}
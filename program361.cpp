#include<iostream>
using namespace std;


// Time Complexity : O(n^2)
// Space complexity : O(1)
void sort(int Arr[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(Arr[i] < Arr[j])
            {
                swap(Arr[i],Arr[j]);
            }
        }
    }
}



int main()
{
    int Arr[] = {1,2,3,5,4,6,7,9,8};

    int n = sizeof(Arr)/sizeof(Arr[0]);

    sort(Arr,n);

    for(int i = 0 ; i <  n ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
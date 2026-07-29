#include<iostream>
using namespace std;

void BinarySearch(int left,int right,int Arr[],int Val)
{
    int mid = (left + right)/2;
    if(left > right)
    {
        return;
    }
    if( Val == Arr[mid])
    {
        cout<<"The valuse is: "<<Val<<endl;
    }
    
    if(Val > Arr[mid])
    {
        BinarySearch(mid+1,right,Arr, Val);
    }
    if(Val < Arr[mid])
    {
        BinarySearch(left,mid-1,Arr,Val);
    }
}


int main()
{

    int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int iValue = 0;

    cout<<"Enter A Value to search";
    cin>>iValue;
    BinarySearch(0,9,Arr,iValue);
    return 0;
}
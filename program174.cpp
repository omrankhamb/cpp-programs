#include<iostream>
using namespace std;

void display(int Arr[],int iSize)
{
    int iCnt = 0 ;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<" ";
    }

}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    cout<<"Enter Size Of Array : \n";
    cin>>iValue;

    int *Arr = new int[iValue];

    cout<<"Enter Elements of Array : \n";
    for(iCnt = 0 ; iCnt < iValue ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    display(Arr,iValue);
    return 0;
}
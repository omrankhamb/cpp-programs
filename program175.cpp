#include<iostream>
using namespace std;

int Summation(int Arr[],int iSize)
{
    int iCnt = 0 ;
    int iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    cout<<"Enter Size Of Array : \n";
    cin>>iValue;

    int *Arr = new int[iValue];

    cout<<"Enter Elements of Array : \n";
    for(iCnt = 0 ; iCnt < iValue ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = Summation(Arr,iValue);
    cout<<"Summation of array is : "<<iRet;
    
    return 0;
}
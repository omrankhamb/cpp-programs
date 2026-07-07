#include<iostream>
using namespace std;

void ChkOdd(int Arr[],int iSize)
{
    int iCnt = 0 ;
    int iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)

        {
            cout<<Arr[iCnt]<<"  ";
        }
    }


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

    cout<<"Odd Numbers in array is :\n";
    ChkOdd(Arr,iValue);
    
    return 0;
}
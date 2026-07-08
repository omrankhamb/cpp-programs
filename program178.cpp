#include<iostream>
using namespace std;

bool LinearSearch(int Arr[],int iSize,int iNo1)
{
    int iCnt = 0 ;
    int iSum = 0;
    bool bFlag = false;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo1)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int iNo = 0;
    bool bRet = 0;

    cout<<"Enter Size Of Array : \n";
    cin>>iValue;

    cout<<"Enter Numbre to find In array : \n";
    cin>>iNo;

    int *Arr = new int[iValue];

    cout<<"Enter Elements of Array : \n";
    for(iCnt = 0 ; iCnt < iValue ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Odd Numbers in array is :\n";
    bRet = LinearSearch(Arr,iValue,iNo);

    if(bRet)
    {
        cout<<"Number present in array \n";
    }
    else
    {
        cout<<"Number Is not present in array\n";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

// Printing number line
bool ChkPrime(int iNo)
{
    int iCnt = 0;
    bool bFlaf = true;
    for(iCnt = 2 ; iCnt <= iNo / 2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlaf = false;
            break;
        }
    }

    return bFlaf;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Nmber : ";
    cin>>iValue;
    
    bRet = ChkPrime(iValue);
    if(bRet)
    {
        cout<<"Number is Prime";
    }
    else
    {
        cout<<"Number is Not Prime";
    }
    return 0;
}
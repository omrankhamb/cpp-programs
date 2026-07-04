#include<iostream>
using namespace std;

// Printing number line
bool ChkPrime(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2 ; iCnt <= iNo / 2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        }
    }

    if(iCnt >= (iNo / 2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
#include<iostream>
using namespace std;

//CheckNumber is Perfect or not
bool ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
   
    if(iSum == iNo)
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
    
    bRet = ChkPerfect(iValue);
    if(bRet)
    {
        cout<<"Number is perfect";
    }
    else
    {
        cout<<"Number is not perfect";
    }

    return 0;
}
#include<iostream>
using namespace std;

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    cout<<"Enter Number : \n";

    cin>>iNo;
    iRet = CountOdd(iNo);
    cout<<"Count of ODD digit are : "<<iRet;
    return 0;
}
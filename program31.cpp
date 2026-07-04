#include<iostream>
using namespace std;

int CountEven(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
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
    iRet = CountEven(iNo);
    cout<<"Count of Even digit are : "<<iRet;
    return 0;
}
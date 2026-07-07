#include<iostream>
using namespace std;

int SumOfDigit(int iNo)
{
    int iSum = 0;
    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        iSum = iSum  + iDigit;
        iNo = iNo / 10;
    }
    

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    cout<<"Enter Number : \n";
    cin>>iValue;

    iRet = SumOfDigit(iValue);
    cout<<"Reverse of A number is : "<<iRet;
    return 0;
}
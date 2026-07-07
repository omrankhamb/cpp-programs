#include<iostream>
using namespace std;

int Count_Frequency(int iNo,int iVal)
{
    int iSum = 0;
    int iCount = 0;
    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iVal == iDigit)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    

    return iCount;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    int iNo = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    cout<<"Enter Digit to Count frequency : \n";
    cin>>iNo;

    iRet = Count_Frequency(iValue,iNo);
    cout<<"Frequency of Number is : "<<iRet;
    return 0;
}
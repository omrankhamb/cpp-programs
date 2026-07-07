#include<iostream>
using namespace std;

bool ChkPalindrome(int iNo)
{
    int iSum = 0;
    int iNo2 = iNo;
    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        iSum = iSum * 10 + iDigit;
        iNo = iNo / 10;
    }
    

    return iSum==iNo2;
}

int main()
{
    bool bRet = false;
    int iValue = 0;
    cout<<"Enter Number : \n";
    cin>>iValue;

    bRet = ChkPalindrome(iValue);
    
    if(bRet)
    {
        cout<<"Number is Palindrome\n";
    }
    else
    {
        cout<<"Number is not Palindrome\n";
    }
    return 0;
}
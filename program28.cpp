#include<iostream>
using namespace std;

bool ChkPalindrome(int iNo)
{
    int iDigit = 0;
    int helper = iNo;
    int iNEW = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNEW = iNEW * 10 + iDigit;
        iNo = iNo /10;
    } 
    if(iNEW == iNo)
    {
        return true;
    }
    return false;
}


int main()
{
    int iNo = 0;
    int iDigit = 0;
    bool bRet = false;

    cout<<"Enter Number To Check Palindrome: ";
    cin>>iNo;

    bRet = ChkPalindrome(iNo);
    if(bRet)
    {
        cout<<"Number Is Prime\n";
    }
    else
    {
        cout<<"Number is Not Palindrome\n";
    }

    return 0;
}
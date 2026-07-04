#include<iostream>
using namespace std;

// Printing number line
bool NumberLine(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Nmber : ";
    cin>>iValue;
    
    NumberLine(iValue);
    return 0;
}
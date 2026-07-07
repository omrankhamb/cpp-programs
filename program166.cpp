#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }

    return(b,a%b);
}

int main()
{
    int iNo1 = 0 ,iNo2 = 0,iRet = 0;

    cout<<"Enter Two Numbers to find gcd : ";
    cin>>iNo1;
    cin>>iNo2;

    iRet = gcd(iNo1,iNo2);
    cout<<"Gcd Of number is :"<<iRet;

    return 0;
}
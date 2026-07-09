#include<iostream>
using namespace std;

int addition(int a,int b)
{
    int ans = 0;
    ans = a + b;
    return ans;
}

int substraction(int a,int b)
{
    int ans = 0;
    ans = a - b;
    return ans;
}

int main()
{
    int iRet = 0;
    iRet = addition(12,12);
    cout<<iRet<<endl;

    iRet = substraction(14,12);
    cout<<iRet<<endl;
    
    return 0;
}
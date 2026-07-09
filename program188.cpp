#include<iostream>
using namespace std;

template<class T>
T addition(T a,T b)
{
    T ans = 0;
    ans = a + b;
    return ans;
}

int main()
{
    int iRet  = 0;
    iRet = addition(11,11);
    cout<<iRet<<endl;

    float fRet = 0;
    fRet = addition(11.11f,12.12f);
    cout<<fRet<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int Pow(int iPos)
{
    int iMask = 0x1;
    int iNo = 0;

    iNo = iMask  << (iPos);

    return iNo;
}

int main()
{
    Pow(2);
    return 0;
}
#include<iostream>
using namespace std;

void ReverseX(int iNo)
{
    int iDigit = 0;
    while (iNo != 0)
        {
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo /10;
    } 
}


int main()
{
    int iNo = 0;
    int iDigit = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    ReverseX(iNo);

    return 0;
}
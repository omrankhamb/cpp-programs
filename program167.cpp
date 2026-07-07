#include<iostream>
using namespace std;

void display(int iNo)
{
    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        cout<<iDigit<<"\t";
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;
    cout<<"Enter Number : \n";
    cin>>iValue;

    display(iValue);
    return 0;
}
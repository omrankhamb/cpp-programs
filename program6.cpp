#include<iostream>
using namespace std;

int main()
{
    int iNo= 0 ,iNo1 = 0 ,iNo2 = 0;

    cout<<"Enter First Number : ";
    cin>>iNo;

    cout<<"Enter Second Number : ";
    cin>>iNo1;

    cout<<"Enter Third Number : ";
    cin>>iNo2;

    if(iNo > iNo1)
    {
        if(iNo > iNo2)
        {
            cout<<iNo;
        }
        else{
            cout<<iNo2;
        }
    }
    else
    {
        if(iNo1 > iNo2)
        {
            cout<<iNo1;
        }
        else
        {
            cout<<iNo2;
        }
    }
    return 0;
}
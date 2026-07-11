#include<iostream>
using namespace std;

int Rec(int iNo)
{
    if(iNo == 0)
    {

        return 0;
    }

    cout<<iNo<<endl;

    Rec(iNo-1);
}


int main()
{
    int iValue = 0;

    cout<<"Enter A NUmber : \n";
    cin>>iValue;

    Rec(iValue);


    return 0;
}


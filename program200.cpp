#include<iostream>
using namespace std;

void Space(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    cout<<"  ";
    Space(iNo-1);
}

void Display2(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    cout<<"* ";
    Display2(iNo-1);
}

void Display(int iNo,int iNo2)
{
    if(iNo == 0)
    {
        return;
    }

    Space(iNo-1);
    Display2(iNo2 - (iNo - 1));
    Display2(iNo2 - (iNo - 1));
    cout<<endl;
    Display(iNo-1,iNo2);
}

int main()
{
    int iValue = 0;

    cout<<"Enter A NUmber : \n";
    cin>>iValue;

    Display(iValue,iValue);


    return 0;
}


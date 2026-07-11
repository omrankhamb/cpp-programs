#include<iostream>
using namespace std;


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
        return ;
    }

    Display2(iNo2);
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


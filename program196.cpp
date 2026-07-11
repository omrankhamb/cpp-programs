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
    int iValue2 = 0;

    cout<<"Enter A Of Rows : \n";
    cin>>iValue;

    cout<<"ENter Number of Column : \n";
    cin>>iValue2;


    Display(iValue,iValue2);


    return 0;
}


#include<iostream>

using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
    {
        cout<<"Jay Ganesh\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter NUmber : ";
    cin>>iValue;

    Display(iValue);
    
    return 0;
}
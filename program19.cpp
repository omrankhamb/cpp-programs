#include<iostream>
using namespace std;
//Decreae the Number of iteration by Making Condition iNO/2
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<endl;
        }
    }
   
}

int main()
{
    int iValue = 0;


    cout<<"Enter NUmber : ";
    cin>>iValue;
    
    DisplayFactors(iValue);
    
    return 0;
}
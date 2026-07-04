#include<iostream>
using namespace std;

// Display factors of numebr
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
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
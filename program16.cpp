#include<iostream>

using namespace std;

void ChkDivisible(int iNo)
{
   if ( (iNo % 3 == 0) && (iNo % 5 == 0 )) 
   {
    cout<<"Number is divisible by 3 and 5"<<iNo<<endl;

   }
   else
   {
    cout<<"Number is not divisible by 3 and 5 both"<<iNo<<endl;
   }
}

int main()
{
    int iValue = 0;

    cout<<"Enter NUmber : ";
    cin>>iValue;

    ChkDivisible(iValue);
    
    return 0;
}
#include<iostream>
using namespace std;

bool ChkDivisible(int iNo)
{
   if ( (iNo % 3 == 0) && (iNo % 5 == 0 )) 
   {
        return true;
   }
   else
   {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter NUmber : ";
    cin>>iValue;

    bRet =  ChkDivisible(iValue);
    if(bRet)
    {
        cout<<"Divisible by both 3 and 5";
    }
    else
    {
        cout<<"Not divisible by 3 and 5 both";
    }
    
    return 0;
}
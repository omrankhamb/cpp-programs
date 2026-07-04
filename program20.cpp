#include<iostream>
using namespace std;

//Finding Sum of all factors 
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
   
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Nmber : ";
    cin>>iValue;
    
    iRet = SumFactors(iValue);
    cout<<"Sum of all factors is : "<<iRet;
    return 0;
}
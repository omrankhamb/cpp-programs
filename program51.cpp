#include<iostream>
using namespace std;

int SumOdd(int Arr[],int isize)
{
   int iSum = 0;
   int iCount = 0;
   for(int iCnt = 0 ; iCnt < isize ; iCnt++)
   {
      if(Arr[iCnt] % 2 == 1) 
      {
         iSum = iSum + Arr[iCnt];
      }
   }


   return iSum;;
}


int main()
{
   int iSize = 0;
   int iRet = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];

   cout<<"Enter Element of Array : \n";
   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   iRet = SumOdd(Arr,iSize);
   cout<<"Sum of ODD Number in Array :  "<<iRet;
   return 0;
}
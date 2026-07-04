#include<iostream>
using namespace std;

int Summation(int Arr[],int isize)
{
   int iSum = 0;
   for(int iCnt = 0 ; iCnt < isize ; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }


   return iSum;
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

   iRet = Summation(Arr,iSize);
   cout<<"Summation Of Array is : "<<iRet;
   return 0;
}
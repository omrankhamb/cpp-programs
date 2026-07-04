#include<iostream>
using namespace std;

bool Maximum(int Arr[],int isize,int iNo)
{
   int iCnt = 0;
   int iMax = Arr[0];

   for(iCnt = 1 ; iCnt < isize ; iCnt++)
   {
      if(iMax < Arr[iCnt])
      {
         iMax = Arr[iCnt];
      }
   }


   return iMax;
}


int main()
{
   int iSize = 0;
   int iNo = 0;
   int iRet = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];

   cout<<"Enter Element of Array : \n";
   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   iRet = Maximum(Arr,iSize,iNo);
   cout<<"Maximum number in Array is : "<<iRet;
   return 0;
}
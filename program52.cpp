#include<iostream>
using namespace std;

int CountFrequency(int Arr[],int isize,int iNo)
{
   int iSum = 0;
   int iCount = 0;
   for(int iCnt = 0 ; iCnt < isize ; iCnt++)
   {
      if(Arr[iCnt] == iNo) 
      {
         iCount++;
      }
   }


   return iCount;
}


int main()
{
   int iSize = 0;
   int iRet = 0;
   int iNo = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];

   cout<<"Enter Element of Array : \n";
   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   cout<<"Enter Number to Count Frequency : ";
   cin>>iNo;


   iRet = CountFrequency(Arr,iSize,iNo);
   cout<<"Frequency Count of number in array is  :  "<<iRet;
   return 0;
}
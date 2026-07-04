#include<iostream>
using namespace std;

bool LinearSearch(int Arr[],int isize,int iNo)
{
   int iSum = 0;
   int iCnt = 0;

   for(iCnt = 0 ; iCnt < isize ; iCnt++)
   {
      if(Arr[iCnt] == iNo) 
      {
         break;
      }
   }
   if(iCnt == isize)
   {
      return false;
   }
   else
   {
      return true;
   }
}


int main()
{
   int iSize = 0;
   bool bRet = 0;
   int iNo = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];

   cout<<"Enter Element of Array : \n";
   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   cout<<"Enter Number to Find    : ";
   cin>>iNo;


   bRet = LinearSearch(Arr,iSize,iNo);
   if(bRet)
   {
      cout<<"Number Present in Array\n";
   }
   else
   {
      cout<<"Number Is Not present in arry\n";
   }
   return 0;
}
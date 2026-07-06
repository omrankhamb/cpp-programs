#include<iostream>
using namespace std;


class ArrayX
{
   public :
      int Summation(int Arr[],int iSize)
      {
         int iCnt = 0;
         int iSum = 0;

         for(iCnt = 0 ; iCnt < iSize ; iCnt++)
         {
            iSum = iSum + Arr[iCnt];
         }

         return iSum;
      }

};


int main()
{
   int iSize = 0;
   int iNo = 0;
   int iRet = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];
   ArrayX aobj;

   cout<<"Enter Element of Array : \n";
   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   iRet = aobj.Summation(Arr,iSize);
   cout<<"Summation Of array : "<<iRet;
   return 0;
}
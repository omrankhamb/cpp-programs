#include<iostream>
using namespace std;

void Display(int Arr[],int isize)
{
   for(int iCnt = 0 ; iCnt < isize ; iCnt++)
   {
      cout<<*(Arr+iCnt)<<"\t";
   }
}


int main()
{
   int iSize = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];
// int *Arr = (int*)malloc(sizeof(int)* iSize);

   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>(*(Arr+i));
   }

   Display(Arr,iSize);
   return 0;
}
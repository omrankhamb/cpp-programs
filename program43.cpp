#include<iostream>
using namespace std;


int main()
{
   int iSize = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *Arr = new int[iSize];
// int *Arr = (int*)malloc(sizeof(int)* iSize);

   for(int i = 0 ; i < iSize ; i++)
   {
      cin>>Arr[i];
   }

   for(int i = 0 ; i< iSize ; i++)
   {
      cout<<Arr[i]<<"\t";
   }
   return 0;
}
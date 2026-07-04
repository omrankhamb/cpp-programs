#include<iostream>
using namespace std;


int main()
{
   int iSize = 0;
   cout<<"Enter Size : \n";
   cin>>iSize;

   int *arr = NULL;
   // NULL = (void*)0;

   arr = (int*)malloc(iSize*iSize);

   for(int i = 0 ; i< iSize ; i++)
   {
      cin>>arr[i];
   }

   for(int i = 0 ; i < iSize ; i++)
   {
      cout<<arr[i];
   }
   return 0;
}
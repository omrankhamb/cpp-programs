#include<iostream>
using namespace std;


int main()
{
   int iLength = 0;
   cout<<"Enter Number : \n";
   cin>>iLength;

   int Arr[iLength];

   for(int i = 0 ; i<iLength ; i++)
   {
      cin>>Arr[i];
   }

   for(int i = 0 ; i < iLength ; i++)
   {
      cout<<Arr[i]<<"\t";
   }
   return 0;
}
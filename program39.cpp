#include<iostream>
using namespace std;


void Display(int *iptr)
{
   int iCnt = 5;
   
   for(int i = 0 ; i <iCnt ; i++)
   {
      cout<<*(iptr+i)<<"\t";
   }
}

int main()  
{
   int Arr[5] = {10,20,30,40,50};

   cout<<"Base Address of Arr :"<<Arr<<endl;
   Display(Arr);

   return 0;
}
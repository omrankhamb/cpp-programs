#include<iostream>
using namespace std;


void Display(int *iptr)
{
   cout<<"Value if iPtr :"<<(*iptr)<<endl;
   
}

int main()  
{
   int Arr[5] = {10,20,30,40,50};

   cout<<"Base Address of Arr :"<<Arr<<endl;
   Display(Arr);

   return 0;
}
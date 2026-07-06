#include<iostream>
using namespace std;

void fun()
{
   static int i = 11;
   cout<<i<<endl;
   i++;
}

int main()
{
   fun();
   fun();
   fun();
   fun();
   fun();
   
   return 0;
}
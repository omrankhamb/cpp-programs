#include<iostream>
using namespace std;


void CallByAddress(int *iptr)
{
   (*iptr)++;

}

int main()  
{
   int iValue = 11;
   CallByAddress(&iValue);

   cout<<"Value after function call : "<<iValue;

   return 0;
}
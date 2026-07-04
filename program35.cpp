#include<iostream>
using namespace std;

// Array in C++

void CallByValue(int iNo)
{
   iNo++;

}

int main()  
{
   int iValue = 11;
   CallByValue(iValue);

   cout<<CallByValue;
   return 0;
}
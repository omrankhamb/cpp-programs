#include<iostream>
using namespace std;

int main()
{
   int x;
   //Memory Allocation :  Memoery gets allocated in stack
   //Default Value     :  Garbage default value
   //Scope Of memory   :  local{}
   //Lifetime          :  local{}

   register int y;
   //Memory Allocation :  Memoery gets allocated in CPU Register
   //Default Value     :  Garbage default value
   //Scope Of memory   :  local{}
   //Lifetime          :  local{}

   static int y;
   //Memory Allocation :  Memoery gets allocated in static segment
   //Default Value     :  defulat value
   //Scope Of memory   :  local{}
   //Lifetime          :  global

   extern int y;
   //Memory Allocation :  Memoery gets allocated data section
   //Default Value     :  defulat value
   //Scope Of memory   :  global
   //Lifetime          :  global
   return 0;
}
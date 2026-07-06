#include<iostream>
using namespace std;

// Encapsulation
class Arithematic
{
   // Abstraction
   public : 
      // Work Internally
      int Addition(Arithematic *this)  // error
      {

      }
      
};


int main()
{
   Arithematic mobj;

   // Work Internally
   mobj.Addition(mobj); // error

   return 0;
}
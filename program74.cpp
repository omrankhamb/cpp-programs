#include<iostream>
using namespace std;

// Encapsulation
class Arithematic
{
   // Abstraction
   public : 
      int x,y;
      Arithematic(int ino1 ,int ino2)
      {
         this->x= ino1;
         this->y= ino2;
      }
      // Work Internally
      int Addition()  // error
      {
         return this->x+ this->y;

      }
      
};


int main()
{
   int iRet = 0;
   Arithematic mobj(10,12);

   // Work Internally
   iRet = mobj.Addition();
   cout<<"Additon is : "<<iRet;

   return 0;
}
#include<iostream>
#pragma pack(1)
using namespace std;


class ArrayX
{
   public :
      int *Arr;
      int iSize;


      ArrayX(int x)
      {
         cout<<"Inside Default Constructor\n";
         iSize = x;
         Arr = new int[iSize];        

      }

     ~ArrayX()
     {
         cout<<"Resource Deallocation\n";
         delete []Arr;
     }

};


int main()
{
   
   ArrayX *aobj = new ArrayX(5);
   delete aobj;
   cout<<"End of main\n";
   // when we say delete it will ask to aobj1 is any wish then aobj says my destructor should called
   // Destructor called Arr is also deleter then aobj is delete
   
   return 0;
}
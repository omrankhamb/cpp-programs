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
   
   return 0;
}
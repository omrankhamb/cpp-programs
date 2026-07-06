#include<iostream>
#pragma pack(1)
using namespace std;


class ArrayX
{
   public :
      int *Arr;
      int iSize;


      ArrayX()
      {
         cout<<"Inside Default Constructor\n";

      }

      ArrayX(int x)
      {
         cout<<"Inside parametriesd consrtructor\n";
      }

};


int main()
{
   ArrayX aobj();   
   cout<<sizeof(aobj()) ;
   return 0;
}
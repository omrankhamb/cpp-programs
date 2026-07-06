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

      }

};


int main()
{
   ArrayX aobj();    // error
   cout<<sizeof(aobj);
   return 0;
}
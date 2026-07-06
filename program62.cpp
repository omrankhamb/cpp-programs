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
   ArrayX aobj(5);    
   cout<<sizeof(aobj);
   return 0;
}
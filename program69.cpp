#include<iostream>
using namespace std;

class Demo
{
   public : 
      Demo()
      {
         cout<<"Inside Demo constructor\n";
      }

      int Additoin(int x,int y)
      {
         return x + y;
      }
};

int main()
{
   Demo dobj;
   // Static object creation
   dobj.Additoin(12,12);

   Demo *dobj2 = new Demo();
// work as a Demo *dobj = (Demo*)malloc(sizeof(Demo));
   dobj2->Additoin(12,12);
   


   return 0;
}
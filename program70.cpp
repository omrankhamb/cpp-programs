#include<iostream>
using namespace std;

class Demo
{
   public : 
      Demo()
      {
         cout<<"Inside Constructor\n";
      }

      ~Demo()
      {
         cout<<"Inside Destructor\n";
      }

      void fun()
      {
         cout<<"Inside Fun\n";
      }

};


int main()
{
   cout<<"Inside main\n";
   Demo dobj;

   dobj.fun();

   cout<<"End of main\n";

   return 0;
}
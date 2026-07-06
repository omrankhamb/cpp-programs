#include<iostream>
using namespace std;

class Demo
{
   public :
      int i;            // non - static charcterstics
      int j;            // non - static charcterstics
      static int k;     // Static characterstics

      Demo()
      {
         cout<<"Inide Demo Cinstructor\n";
         i = 0;
         j = 0;
      }

      void fun()
      {
         cout<<"Inside non Static fun\n";
         cout<<" i : "<<i<<endl;
         cout<<" j : "<<i<<endl;
         cout<<" k : "<<k<<endl;
      }

      // can not access non-static characterstics
      static void gun()
      {
         cout<<"Inside Static gun\n";
         cout<<" k : "<<k<<endl;
      }
};
int Demo::k = 11;     // static characterstic initialization


int main()
{
   cout<<Demo::k<<"\n"; // Accessing static function
   Demo::gun();      // Staticd function called

   Demo dobj;
   dobj.fun();       // Non-static function call
   cout<<dobj.i<<"\n";  //accessing non-static characterstics
   cout<<dobj.j<<"\n";  //accessing non-static characterstics

   
   return 0;
}
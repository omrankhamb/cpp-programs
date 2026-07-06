#include<iostream>
using namespace std;

// Encapsulation
class Marvellous
{
   // Abstraction
   public : 
      int x,y;
      // Default constructor
      Marvellous()
      {
         cout<<"Inside Default Constructor\n";
      }

      // Parametrised constructor
      Marvellous(int iNo,int iNo2)
      {
         cout<<"Inside Parametrised constructor\n";
         this->x = iNo;
         this->y = iNo2;
      }

      // Copy constructor
      Marvellous(Marvellous &ref)
      {
         cout<<"Inside Copy Constructor\n";
         cout<<ref.x<<endl;
         cout<<ref.y<<endl;

      }
};


int main()
{
   Marvellous mobj;

   Marvellous mobj2(11,12);

   Marvellous mob3(mobj2);
   

   return 0;
}
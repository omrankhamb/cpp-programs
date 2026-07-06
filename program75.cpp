#include<iostream>
using namespace std;

// Encapsulation
class Demo
{  
   public :
      Demo()
      {
         cout<<"Inside Demo Constructor\n";
      }

      // Method overriding
      //Addition@2ii()
      int Additon(int iNo,int iNo2)
      {
         return iNo + iNo2;
      }

      //Addition@3iii()
      float Addition(int iNo1,int iNo2,int iNo3)
      {
         return iNo1 + iNo2 + iNo3;
      }

      // Addition@if()
      int Addition(int iNo,float fNo2)
      {
         return iNo + fNo2;
      }


};


int main()
{
   int iRet = 0;
   Demo dobj;

   iRet = dobj.Addition(12,13);
   cout<<"Addition is "<<iRet<<"\n";

   iRet = dobj.Addition(12,13,14);
   cout<<"Addition is "<<iRet<<"\n";

   return 0;
}
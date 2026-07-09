#include<iostream>
using namespace std;


class Demo
{
    public:
        int addition(int a,int b)
        {
            int ans = 0;
            ans = a + b;
            return ans;
        }

        int substraction(int a,int b)
        {
            int ans = 0;
            ans = a - b;
            return ans;
        }

};


int main()
{
    Demo dobj;
    int iRet = 0;
    iRet = dobj.addition(12,12);
    cout<<iRet;


    iRet =  dobj.substraction(14,13);
    cout<<iRet;

    
    return 0;
}
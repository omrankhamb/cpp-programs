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

        float Addition(float a,float n)
        {
            return a + n;
        }
};


int main()
{
    Demo dobj;
    int iRet = 0;
    iRet = dobj.addition(12,12);
    cout<<iRet<<endl;


    iRet =  dobj.substraction(14,13);
    cout<<iRet<<endl;;

    float Ret = dobj.Addition(12.12f,11.11f);
    cout<<Ret<<endl;;
    
    return 0;
}
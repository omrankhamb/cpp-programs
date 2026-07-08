#include<iostream>
using namespace std;

class Hello
{
    public :
        void fun();
        void gun();
};

class Demo
{
    public :  
        int i;
    private : 
        int j;
    protected :     
        int k;

    public:
        Demo()
        {
            cout<<"Construct Called"<<endl;
            i = 21;
            j = 21;
            k = 21;
        }

    friend void Hello ::fun();
};

void Hello :: fun()
{
    Demo dobj;

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;

}


int main()
{
    Hello hobj;
    hobj.fun();
    return 0;
}
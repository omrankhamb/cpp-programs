#include<iostream>

using namespace std;

class hello
{
    public:
        void fun()
        {
            Demo dobj;

            cout<<dobj.i<<endl;
            cout<<dobj.j<<endl;     
            cout<<dobj.k<<endl;
        }
        
        void gun()
        {
            Demo dobj;

            cout<<dobj.i<<endl;
            cout<<dobj.j<<endl;     
            cout<<dobj.k<<endl;
        }

};


class Demo
{
    public :
        int i;
    private:
        int j;
    
    protected :
        int k;
    
    public :
        Demo()
        {
            cout<<"Constructor called"<<endl;
            i = 21;
            j = 21;
            k = 51;
        }

    friend void hello :: fun();

};



int main()
{
    hello hobj;

    hobj.fun();
    hobj.gun();
    return 0;
}
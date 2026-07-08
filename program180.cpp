#include<iostream>

using namespace std;

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

    friend void fun();
};

void fun()
{
    Demo dobj;
    
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;     
    cout<<dobj.k<<endl;
}

int main()
{
    Demo dobj;

    fun();
    return 0;
}
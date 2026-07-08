#include<iostream>

using namespace std;

class Demo
{
    public :
        int i;
    private:
        int j;
    friend void fun(int,int);
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

   

};

void fun(int x,int y)
{
    Demo dobj;
    
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;     
    cout<<dobj.k<<endl;
}

int main()
{
    Demo dobj;

    fun(21,22);
    return 0;
}
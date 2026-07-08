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
};

int main()
{
    Demo dobj;

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;     //error
    cout<<dobj.k<<endl;     // error
    return 0;
}
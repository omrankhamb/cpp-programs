#include<iostream>
using namespace std;

class Base
{
    public :

        int i;

        Base* getInstance()
        {
            // The instance same is created ans sharing the same instance by the object
            Base *obj = new Base();
            obj->i = 10;
            cout<<"Addredd of obj is : "<<obj<<endl;

            // Obj means storing address
            return obj;
        }
};

int main()
{

    Base newn;

    cout<<"Name of object is "<<&newn<<endl;
    cout<<newn.i<<endl;
    Base *obj = newn.getInstance();
    cout<<obj->i<<endl;
    cout<<"Address of Object in main "<<obj;
    return 0;
}
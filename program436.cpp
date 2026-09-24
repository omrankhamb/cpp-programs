#include<iostream>
using namespace std;


class Base
{
    public :
    int i;
    public :
        void fun(int j)
        {
            this->i  = j;
            cout<<"Inside function Base Main"<<endl;
        }
};


int main()
{

    Base obj;
    obj.fun(11);

    Base &newn = obj;

    cout<<newn.i;

    return 0;
}
#include<iostream>
using namespace std;

class Base
{
    public :

        int i;

        void getI(int i)
        {
            this->i = i;
        }
};

int main()
{

    Base newn;
    newn.getI(24);

    Base *ptr = &newn;
    cout<<"The value of i is same : "<<ptr->i<<endl;

    Base &ref = newn;

    cout<<ref.i<<endl;

    return 0;
}
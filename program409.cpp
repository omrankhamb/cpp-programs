#include<iostream>
using namespace std;

class A
{
    public : 
        int a;
        virtual void add()
        {
            cout<<"Inside base class A"<<endl;
        }
};

class B : public A
{
    public : 
        int b;
        void add()
        {

            cout<<"Insode base class B"<<endl;
        }
};

int main()
{

    B b;
    b.add();


    // size of class increse becuse the virtaul pointer added 
    cout<<"size of a : "<<sizeof(A)<<endl;

    // because of the virtual pointer and class base B is inherited then the class B size is alsi increaes
    cout<<"Size of B : "<<sizeof(B);

    return 0;
}
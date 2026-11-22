#include<iostream>
using namespace std;


class Base1
{
    public : 
        virtual void display()
        {
            cout<<"The display method in the Base1 class " <<endl;
        }

};

class Base2
{
    public : 
        virtual void display()
        {
            cout<<"The display method in the base2 class"<<endl;
        }
};

class Derived : public Base1 , Base2
{
    public : 
        void display()
        {
            cout<<"The display method of the child class"<<endl;
        }
};


int main()
{

    Base1 * obj = new Base1();

    obj->display();
    return 0;
}
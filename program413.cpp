#include<iostream>
using namespace std;




class Base
{
    private : 
                int a;
    public : 

        Base()
        {
            this->a = 10;
        }

    friend void show(Base);
};



// it can access the private function but no can access the private
// protected members but no one can not access the private members

void show(Base obj)
{
    cout<<obj.a<<endl;
    cout<<"The function is friend\n";
}



int main()
{

    Base obj;

    show(obj);
    return 0;
}
#include<iostream>
using namespace std;


class Animal
{
    public : 
        virtual void  sound()
        {
            cout<<"The Animal sound"<<endl;
        }
};

class Dog : public Animal
{
    public : 
        void sound()
        {
            cout<<"The Dog Sound"<<endl;
        }
};

int main()
{

    Animal *obj = new Dog;
    obj->sound();
    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    private : 
        static Demo *obj;
        Demo()
        {
            cout<<"Object is created"<<endl;
        }

    public : 
        static Demo * getInstance()
        {
            if(obj == NULL)
            {
                obj = new Demo();
            }

            return obj;
        }

        void print()
        {
            cout<<"Instance is created for the object"<<endl;
        }
};

Demo * Demo :: obj = NULL;

int main()
{
    Demo *obj = NULL;

    obj = Demo::getInstance();
    obj->print();

    /*
    
        In SingleTon Design pattern The Same object is shared to all instance
        to share the object is know as singletom pattern
    */


    return 0;
}


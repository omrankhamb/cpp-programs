#include<iostream>
using namespace std;

// System Design method

class Demo
{
    private : 
    static Demo *obj;

    Demo()
    {
        cout<<"POinter is intialised TO NULL"<<endl;
       
    }

    public : 
        static Demo* getInstance()
        {
                if(obj == NULL)
                {
                    obj = new Demo();
                }

                return obj;
        }   

    public : 
        void Print()
        {
            cout << "To print the data In the Print"<<endl;
        }
};

Demo* Demo :: obj = NULL;



int main()
{
    Demo *object = NULL;
    object = Demo::getInstance();

    object->Print();
    return 0;
}
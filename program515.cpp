#include<iostream>
using namespace std;


class demo
{
    protected : 
        demo()
        {
            cout<<"Object is created"<<endl;
        }
};

class base : public demo
{
    public : 
        demo *obj;
        base()
        {
            obj  = new demo();
        }
};
int main()
{

    base dobj();
    return  0;   
}
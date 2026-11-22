#include<iostream>
using namespace std;


class ab
{
    public : 
        void display()
        {
            cout<<"In the function ab"<<endl;
        }
};

class ba : public ab
{
    public : 

    void display()
    {
        cout<<"In the function in ab"<<endl;
    }
    
};

int main()
{

    ba obj;
    obj.display();
    return 0;
}
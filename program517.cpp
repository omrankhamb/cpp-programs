#include <iostream>
using namespace std;

class A
{
public:
   
    A()
    {
        cout << "Constructor is initilazied" << endl;
    }
};

int main()
{

    A * a = new A;
    return 0;
}
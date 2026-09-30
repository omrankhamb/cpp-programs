#include <iostream>
using namespace std;

class Base
{
public:
    Base(int i)
    {
        cout << "Inside the base constructor : " << i << endl;
    }
};

class Demo : public Base
{
public:
    Demo(int i) : Base(i)
    {
        cout << "Inside the demo constructor  : " << i << endl;
    }
};

int main()
{

    Demo obj(11);

    return 0;
}
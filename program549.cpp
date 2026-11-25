#include <iostream>
using namespace std;

class demo

{
public:

    int *x;
    demo(int y)   
    {
        x = new int;
        (*x) = y;
    }

    // demo(demo &obj)
    // {
    //     this->x = obj.x;
    // }
};

int main()
{
    demo obj(10);
    demo dobj2 = obj;
    cout<<dobj2.x<<endl;
    // dobj2 = 21;
    cout<<dobj2.x<<endl;
    cout<<obj.x<<endl;

    return 0;
}
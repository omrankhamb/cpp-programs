#include <iostream>
using namespace std;


class demo
{
    public : 

    demo ()
    {

    }
    demo* fun(demo *dobj)
    {
        return dobj;
    }
};

int main()
{
    demo dobj;

    demo * obj2;
    
    obj2 = dobj.fun(&dobj);
    
    return 0;   
}
#include<iostream>
#include<list>
using namespace std;

// list in C++ 
int main()
{

    list<int>lobj;

    lobj.push_back(1);
    lobj.push_back(2);
    lobj.push_back(3);

    lobj.push_front(9);
    lobj.push_front(10);
    lobj.push_front(11);

    lobj.pop_back();

    


    for(int x : lobj)
    {
        cout<<x<<"  ";
    }
    
    return 0;
}

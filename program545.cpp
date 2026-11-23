#include <iostream>
#include <vector>
using namespace std;


template<class T>
// T (y)(T) it can be read as thereturn type is T and the input values are the T
void function(T x , T (y)(T))
{
    T z = y(x);
    cout<<"the value is accepted : "<<z<<"  "<<endl;
}


template<class T>
T gun(T x)
{
    cout<<"gun is called"<<x<<endl;
    return x;
}

int main()
{

    function(10 , gun);
    return 0;
}
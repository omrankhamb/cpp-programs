#include <iostream>
using namespace std;


template<class T>
void fun(T x)
{
    cout<<"the data type is ; "<<x<<endl;
}


int main()
{

    fun(4.234);
    return 0;
}
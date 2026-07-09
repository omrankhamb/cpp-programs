#include<iostream>
using namespace std;

template<class T,class X>
class Arithematic
{
    public:
        T a,b;

    Arithematic(T x, T y)
    {
        this->a = x;
        this->b = y;
    }

    T Addition()
    {
        return a + b;
    }

    T Substraction()
    {
        return a - b;
    }
};

template<class K>

int main()
{
    Arithematic <int,float>aobj(10,12);

    cout<<aobj.Addition();
    cout<<aobj.Substraction();
    return 0;
}
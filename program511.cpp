#include <iostream>
using namespace std;

class A
{
private:
    int i;

protected:
    int j;

public:
    int k;
    A()
    {
        i = 11;
        j = 21;
        k = 31;
    }
};

class B : protected  A
{
    void display()
    {
        // cout<<this->i;
        cout<<this->j;
        cout<<this->k;
    }
};

// class C : protected B
// {
//     void display()
//     {
//         // cout<<this->i;
//         cout<<this->j;
//         cout<<this->k;
//     }
// };

int main()
{
    B b;
    //cout<<a.i;
    //cout<<a.j;
    cout<<b.j;
    cout<<b.k;

    return 0;   
}
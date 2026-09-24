#include<iostream>
using namespace std;

class Base
{
    public :

        int i;

        void getI(int i)
        {
            this->i = i;
        }
};

int main()
{

    Base *newn = new Base();
    // dut to pointer the valuees are by default are stored
    newn->getI(11);


    Base &obj = (*newn);

    cout<<obj.i<<endl;

    return 0;
}
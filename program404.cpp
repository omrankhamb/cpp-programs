#include<iostream>
using namespace std;

class Base
{
    private :
        int x;
        void privatex()
        {
            cout<<"In Base Private\n";
        }
    
    protected :
        int y;
        void protectedx()
        {
            cout<<"In base protected\n";
        }

    public :
        int z;
        void publicx()
        {
            cout<<"Inside base Public\n";
        }

    Base()
    {
        this->x = 11;
        this->y = 21;
        this->z = 31;
    }
};


int main()
{
    Base obj;
    
    // obj.privatex(); can not access private
    // obj.protectedx(); also protected can not access
    obj.publicx();

    // can not access private member cout<<obj.x<<endl;
    // can not acces protected member cout<<obj.y<<endl;
    cout<<obj.z<<endl;
    return 0;
}
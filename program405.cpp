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


/*
    if demo function inderited from Base in public visibility mode 
    +-------+-----------------------------------+-----------------------------------+-----------------------------------+
    |       |    private function / variable    |     public function / variable    |      proteced function / variable |
    +-------+-----------------------------------+-----------------------------------+-----------------------------------+
    | public|        NOT ACCESSIBLE             |      ACCESSIBLE IN MAIN           |        FUNCTION ACCESSIBLE ONLY   |
    |       |                                   |     AND IN FUNCTION ALSO          |             IN CLASS DEMO         |
    +-------+-----------------------------------+-----------------------------------+-----------------------------------+
*/
class Demo : public Base
{
    public : 
        Demo()
        {
            cout<<this->y;
            this->protectedx();
            // all are accessible in main inseted of private function
            // cout<<this->x; gives an error

        }
};

int main()
{
    Demo obj;
    obj.publicx();
    obj.z;


    // obj.protectedx();
    return 0;
}
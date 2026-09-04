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
class Demo : private Base
{
    public : 
        Demo()
        {
            this->publicx();    // this can access public only
            this->z;            // this can access public only

            this->protectedx(); // protected can accessible
            this->y;            // protected can accessible

            // this->privatex()    // not accessible
            // this->x;            // private can not accessible in private mode
        }
};

int main()
{
    Demo obj;

    // obj.publicx();               visibiltiy mode is privte no one can not access in main
    // cout<<obj.z<<endl;                     private mode

    // obj.protectedx();            can not accessible in under the main function visibility mode is private
    // cout<<obj.y<<endl;          

    // obj.privatex();
    // obj.x;
    return 0;

}
#include<iostream>
using namespace std;
class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    
    public:
        Demo(){
            i = 0;
            j = 0;
            k = 0;
        }
        void Display(){
            cout<<"Value if i :"<<i<<endl;      // Allowed
            cout<<"Value if j :"<<j<<endl;      // Allowed
            cout<<"Value if k :"<<k<<endl;      // Allowed

        }
};

int main()
{
    Demo dobj;      //No need to new becsuse the objeect is static
    dobj.Display();

    cout<<"Value if i :"<<dobj.i<<endl;     // Allowed
    cout<<"Value if i :"<<dobj.j<<endl;     // Not Allowed
    cout<<"Value if i :"<<dobj.k<<endl;     // Not Allowed
        return 0;
}
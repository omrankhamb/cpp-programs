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

        Base& getInstance(Base *thisX)
        {
            Base *newn = thisX;
            
            cout<<"Adrres of object at Fucntion : "<<(newn)<<endl;
            return (*thisX);

            // same as done before like
            // Base *obj = new Base(); // Object created
            // Base &ref = (*obj); // address of object is stored
        }
};

int main()
{

    Base obj;
    Base *newn = new Base();

    cout<<"Adrres of object at Fucntion : "<<(newn)<<endl;
    newn->getI(22);
    Base &ref = obj.getInstance(newn);
    cout<<ref.i<<endl;
    cout<<"Address or refrence is : "<<&ref<<endl;

    return 0;
}
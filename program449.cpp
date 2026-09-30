#include<iostream>
using namespace std;

class Base
{
    public :
        int i;
        int j;
        void Display()
        {
            this->i = 0;
            this->j = 0;
        }

        void getData()
        {
            cout<<"Enter the values of i :";
            cin>>this->i;

            cout<<"Enter the values of j : ";
            cin>>this->j;
        }

        Base operator +(Base &b)
        {
            Base temp;
            temp.i = this->i + b.i;
            temp.j = this->j + b.j;

            return temp; 
        }

        void display()
        {
            cout<<"Value of i : "<<this->i<<endl;
            cout<<"Value of j : "<<this->j<<endl;
        }
};

int main()
{

    Base obj , obj2, result;
    obj.getData();
    obj2.getData();


    result = obj + obj2;

    result.display();

    



    return  0;
}
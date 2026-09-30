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

        friend Base operator+(Base obj , Base obj2);

        void display()
        {
            cout<<"Value of i : "<<this->i<<endl;
            cout<<"Value of j : "<<this->j<<endl;
        }
};


Base operator+(Base obj1 , Base obj2)
{
    Base temp;
    temp.i = obj1.i + obj2.i;
    temp.j = obj1.j + obj2.j;

    return temp;
}

int main()
{

    Base obj , obj2, result;
    obj.getData();
    obj2.getData();


    result = obj + obj2;    

    result.display();

    



    return  0;
}
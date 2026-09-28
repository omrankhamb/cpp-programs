#include<iostream>
using namespace std;


class Student
{

    public :
        static int i;

        int k;
        int j;
        Student()
        {
            cout<<"Student Number : "<<i<<endl;
            i++;
        }
};

int Student :: i = 0;
int main()
{

    Student *obj = new Student[10];
    Student **pobj = &obj;

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<" "<<(*(*(pobj)+i)).i<<endl;
        cout<<" "<<(*(obj + i)).i<<endl;
    }

    return 0;
}
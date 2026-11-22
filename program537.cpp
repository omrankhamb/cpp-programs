#include<iostream>
using namespace std;

class student
{
    public : 
        int rollNo;
        char *msg;

    student()
    {
        cout<<"Object created"<<endl;
        this->msg = new char[10];
    }

    void getDetails()
    {   
        cout<<"Enter the RollNo : "<<endl;
        cin>>this->rollNo;
        cout<<"Enter the Message : "<<endl;
        cin>>this->msg;
        cout<<endl; 
    }

    void printDetails()
    {
        cout<<"Roll No : "<<this->rollNo<<" ";
        cout<<"Name : "<<this->msg<<endl;
    }
};

int main()
{

    student *s1 = new student[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        s1[i].getDetails();
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        s1[i].printDetails();
    }
}
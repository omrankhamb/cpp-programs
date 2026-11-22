#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    What is the frined function to tell the Compieler that the class , function and the structure exists before its defination provide
    Forwrd Declaration 

    Friend function  : 
    friend function is non - membered function of class that is used to access the private and the protected member of the class
    frined function declaration 
    friend return_type function_name (arg Argument1 ..)
    {
        // body
    }

    these declartion must be written in the class to tell that the class the function is now your frined so it can access the private and the 
    prtected member function

    class : 
        class is user defind data type > class containd the data members and fucntion that decide the behaviour of the class 
        the data members may be satatic or not satatic fucntion may be static or non static 
        class is the blue print of the object when we declare the class and the create data members of the class then no one can access 
        the data members of outside the class except the instance of the class 

        static : 
            the static variable shared the same copy among the created object of the class that all object are allowed to access the 
            to access the static data there is no need to create the object we can easily access like class_name :: data_mamber
            for static variable the memry get accepted at heap 

        Constructor : 
            the constructor is the special member function of the class that is executed when the object is created the constructor has no return type
            the name of constructor should be same as the class name is ised genrally used for initilase the data members 

            type ofconstructor : 
                default constructor 
                parametrised constructor
                copy constructor -> A constructor to intialise one object through another object is called copy constructor 
                dynamic constructor

            
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
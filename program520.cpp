#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public : 
        int RollNo;
        int className;
};

int main()
{

    Student *s = new Student[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        s[i].className = i;
        s[i].RollNo = i;
    }

    cout<<s[3].className<<" "<<s[3].RollNo<<endl;
    return 0;
}
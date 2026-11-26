#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

struct Student
{
    string name;
    int RollNo;
};

typedef struct Student Student;


int main()
{


    fstream obj;
    obj.open("om.bin" , ios :: binary | ios :: out);

    Student *stud = new Student[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        cin>>stud[i].name;
        cin>>stud[i].RollNo;
        obj.write((char*)&stud[i] , sizeof(Student));
    }    
    return 0;
}
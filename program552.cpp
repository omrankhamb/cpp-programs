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
    ifstream fobj("om.bin" , ios::binary);

    Student sobj;

    fobj.seekg(0 , ios :: beg);

    while(fobj.read((char*)&sobj , sizeof(Student)))
    {
        cout<<"Name  : "<<sobj.name<<endl;
        cout<<"Roll Number : "<<sobj.RollNo<<endl;
    }
}
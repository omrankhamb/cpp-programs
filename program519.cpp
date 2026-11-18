#include<iostream>
#include<fstream>
using namespace std;

struct student
{
    int Rollno;
    int classNo;
};

typedef struct student stduent;

int main()
{

    stduent s1;
    student s2;

    s1.Rollno   = 21;
    s1.classNo  = 12;

    fstream file("file.dat" , ios :: out | ios :: binary | ios :: in);

    file.write((char*)&s1  ,sizeof(s1));

    file.seekg(0 , ios :: beg);

    file.read((char*)&s2 , sizeof(s2));

    cout<<s2.Rollno<<" "<<s2.classNo<<endl;
    
    return 0;
}
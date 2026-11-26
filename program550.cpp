#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream obj("file.txt");
    obj<<"Data is writet succesfully";

    cout<<obj.tellp();

    // tell the size of the pointer
    // we can calculate the size of the pointer 

    return 0;
}
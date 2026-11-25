#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream obj("file.txt");
    obj<<"Data is writet succesfully";
    return 0;
}
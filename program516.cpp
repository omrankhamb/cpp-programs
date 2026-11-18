#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // In the write mode if the file is not created then the new file is created
    fstream filein("file.txt" , ios :: out | ios :: in);
    filein<<"My name is Harsh"<<endl;

    // gate pointer
    cout<<filein.tellg()<<endl;
    filein.seekg(0);

    cout<<filein.tellg();
    char ch;

    while (filein.get(ch))
    {
        cout<<ch;
    }
    
    return  0;
}
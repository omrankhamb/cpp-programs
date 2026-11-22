#include<iostream>
using namespace std;


template<class T>
void selectFunction(T type)
{
    cout<<type<<endl;
    int x = 10;
    type();
}

bool name()
{
    cout<<"the name funcion is called"<<endl;
}

bool newname()
{
    cout<<"new name is called"<<endl;
}

int  main()
{
    selectFunction(newname);
}
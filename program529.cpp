#include<iostream>
using namespace std;


template<class T>
void selectFunction(T type)
{
    cout<<type<<endl;
    int x = 10;
    type(x);
}

bool name(int x)
{
    cout<<"the name funcion is called"<<" " <<x <<endl;
}

int  main()
{
    selectFunction(name);
}
#include<iostream>
using namespace std;


class A
{
    public : 
    static int i;
    int j;
    A()
    {
        cout<<"Object is created : "<<i<<endl;
        i++;
    }

    ~A()
    {
        cout<<"Resource is deallocated"<<endl;
    }
};

int A :: i = 1; 

int main()
{

    A *a = new A[5];

    for(int j = 0 ; j < 5 ; j++)
    {
        printf("%x \n" , *(a + j));
    }
   

    return  0;
}
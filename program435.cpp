#include<iostream>
using namespace std;

int main()
{

    int a = 10;

    // Givein token name
    int &x = a;

    int *p = &a;

    cout<<a<<endl;    // 10
    cout<<(*p)<<endl; // 10
    cout<<x<<endl;

    printf("address of variable : %d\n", &a);
    printf("address of variable : %d\n", &x);
    
    return 0;

}
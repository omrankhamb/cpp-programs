#include<iostream>
using namespace std;

int main()
{
    void *p = NULL;
    int x = 11;
    p = &x;

    printf("Pointer hold the address of int : %d\n",*(int*)p);

    char ch = 'A';
    p = &ch;
    printf("Pointer hold the address of char  :%c\n",*(char*)p);

    float f = 58.56f;
    p = &f;
    printf("Pointer hold the address of float : %f\n",*(float*)p);

    return 0;
}
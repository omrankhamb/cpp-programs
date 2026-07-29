#include <iostream>
using namespace std;

char Arr[] = {'1','2','3'};

void Binary(int n)
{
    if (n < 1)
    {
        printf("%d ", Arr);
    }
    else
    {
        Arr[n - 1] = 0;
        Binary(n - 1);
        Arr[n - 1] = 1;
        Binary(n - 1);
    }
}

int main()
{
    Binary(3);
    return 0;
}
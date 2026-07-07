#include<iostream>
using namespace std;



int main()
{
    // char Arr[6] = {'H','e','l','l','o','\0'};
    // char Arr[] = {'H','e','l','l','o','\0'};
    // char Arr[6] = {'H','e','l','l','o'};
    // char Arr[] = "Hello";
    char *Arr = "Hello";
    int i = 0;
    while (Arr[i] != '\0')
    {
        cout<<Arr[i];
        i++;
    }

    cout<<"\n"<<sizeof(Arr);
    
    return 0;
}
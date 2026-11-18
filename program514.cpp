#include<iostream>
using namespace std;

int main()
{
    // int *arr = new int[5];    // array of integer array
    int **arr = new int*[5];    // array of pointer of type which store the address of type pint    
    *arr[0] = 20;

    *(*(arr + 1)) = 21;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<**arr<<endl;
    cout<<*(*(arr + 1))<<endl;


}
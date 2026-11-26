#include<iostream>
#include<fstream>

using namespace std;

template<class t>
void bubblesort(t arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size - i - 1 ; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                t x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }


    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


void show(int x)
{
    cout<<"the int function"<<endl;
}


int show()
{
    cout<<"the function is overloaded"<<endl;
}
int main()
{

    int arr[] = {10 , 30 , 40 , 20 , 60 , 50};
    char arr2[] = {'a' , 'z' , 'c'  , 'b' , 'x' , 'n'};
    int n = 6;

    bubblesort(arr2 , n);

    show(10);
    show();
    return 0;
}
#include <iostream>
#include<stdio.h>
using namespace std;

template<class T>
void bubbleSort(T Arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swap(Arr[j], Arr[j + 1]);
            }
        }
    }
}

template<class T>
void selectionSort(T Arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int key = Arr[i];
        int idx = i;
        for(int j = i + 1 ; j  < n ; j++)
        {
            if(Arr[idx] > Arr[j])
            {
                key = Arr[j];
                idx  = j;
            }
        }

        swap(Arr[i] , Arr[idx]);
    }
}

template<class T> 
void display(T Arr[] , int n)
{
    for  (int i = 0 ; i < n ; i++)
    {
        cout<<Arr[i]<<" ";
    }

    cout<<endl;
}
int main()
{

    int Arr[] = { 9 , 7 , 8 , 3 , 4, 5 , 6, 1 , 2};
    char sArr[] = { 'z' , 'b' , 'd' , 'a' , 'm' , 'l' , 'n'};
    int n= sizeof(sArr)/ sizeof(sArr[0]);

    cout<<"The size of Array : "<<n<<endl;


    selectionSort(sArr , n);
    display(sArr , n);


    n= sizeof(Arr)/ sizeof(Arr[0]);
    selectionSort(Arr , n);
    display(Arr , n);

    return 0;
}
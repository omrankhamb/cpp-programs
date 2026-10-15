#include <iostream>
using namespace std;




void Heapify(int Arr[] ,  int idx , int n)
{
    int largest = idx;
    int left = 2 * idx  + 1;
    int right = 2 * idx + 2;


    if(left < n && Arr[left] > Arr[largest])
    {
        largest = left;
    }

    if(right < n && Arr[right] > Arr[largest])
    {
        largest = right;
    }


    if(largest != idx)
    {
        swap(Arr[largest] , Arr[idx]);
        Heapify(Arr , largest , n);
    }
}


void buildMaxHeap(int arr[], int n)
{
    for(int i = (n-1)/2 ; i >=0 ; i--)
    {
        Heapify(arr , i , n);
    }
}


void printHeap(int Arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<Arr[i]<<" ";
    }

    cout<<endl;
}

int main()
{

    int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};

    buildMaxHeap(arr , 10);
    printHeap(arr , 10);
    return 0;
}
#include <iostream>
using namespace std;

// Heap Sort
// First Buile the Maxheap


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

// 0   1 |  2 |  3 |  4 | 5  | 6  7    8    9
// 3   5   8   9   10   11   13  14   18   70
// i = 0
void sortArray(int arr[] , int n)
{
    for(int i =  n - 1 ; i >= 0 ; i--)
    {
        // last element take to first position
        swap(arr[i] , arr[0]);
        Heapify(arr , 0 , i);
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

/*
    Find the size of the Heap Protiy queue
    
*/

int height(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int Cnt = 0;

    while(n != 1)
    {
        n /= 2;
        Cnt++;
    }

    return Cnt;
}

int main()
{

    int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};

    buildMaxHeap(arr , 10);
    printHeap(arr , 10);
    return 0;
}
#include <iostream>
using namespace std;

void heapify(int *arr, int i, int n)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, largest, n);
    }
}

void createheap(int *arr, int n)
{
    for (int i = (n - 1) / 2; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {45, 12, 32, 19, 33, 22, 10, 65};
    int n = 8;
    createheap(arr , n);
    display(arr , n);
    return 0;
}
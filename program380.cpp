#include <iostream>
using namespace std;

int Partition(int Arr[], int Low, int High)
{
    int left = Low;
    int right = High;
    int pivot = Arr[Low];

    while (left < right)
    {
        while (Arr[left] <= pivot && left < High)
        {
            left++;
        }

        while (Arr[right] > pivot)
        {
            right--;
        }

        if (left < right)
        {
            int temp = Arr[left];
            Arr[left] = Arr[right];
            Arr[right] = temp;
        }
    }

    Arr[Low] = Arr[right];
    Arr[right] = pivot;
    return right;
}

void QuickSort(int Arr[], int Low, int High)
{
    if (Low < High)
    {
        int pivot = Partition(Arr, Low, High);

        QuickSort(Arr, Low, pivot - 1);
        QuickSort(Arr, pivot + 1, High);
    }
}

int main()
{

    int Arr[] = {6, 7, 3, 2, 1, 4, 9, 8, 5};
    int Size = sizeof(Arr) / sizeof(Arr[0]);

    for (int i = 0; i < Size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout<<"\n";

    QuickSort(Arr, 0, Size - 1);
    for (int j = 0; j < Size; j++)
    {
        cout << Arr[j]<<" ";
    }
    return 0;
}
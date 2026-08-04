// Time Complexity : 
//                     Best Case : O(nlogn)
//                     Worst Case : O(nlogn)

// space Complexity : O(n^2)

#include <iostream>
using namespace std;

void Merge(int Arr[], int l, int m, int r)
{
    int n1 = m - l + 1;   // size of left half
    int n2 = r - m;       // size of right half

    int left[n1];
    int right[n2];

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        left[i] = Arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = Arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    // Merge the two halves
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            Arr[k] = left[i];
            i++;
        }
        else
        {
            Arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[]
    while (i < n1)
    {
        Arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[]
    while (j < n2)
    {
        Arr[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(int Arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        MergeSort(Arr, left, mid);
        MergeSort(Arr, mid + 1, right);

        Merge(Arr, left, mid, right);
    }
}

int main()
{
    int Arr[] = {4, 2, 5, 6, 1, 7, 8, 9, 3};
    int Size = sizeof(Arr) / sizeof(Arr[0]);

    for(int i = 0 ; i < Size ; i++)
    {
        cout<<Arr[i]<<" ";
    }

    MergeSort(Arr, 0, Size - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < Size; i++)
        cout << Arr[i] << " ";

    cout << "\nSize of Array is: " << Size << endl;

    for(int i = 0 ; i < Size ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}

#include <iostream>
using namespace std;

// selction sort : Using flag
// Time Complexity : O(n^2)
// Space complexity : O(1)
void SelectionSort(int Arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;    // Considering minimum index 
        for (int j = i; j < n - 1 ; j++)
        {   
            if(Arr[min] > Arr[j])
            {
                min = j;    // findin minimum value and storing its value at min
            }

        }

        // Value stored at minimum index are swap with the i th index
        int temp = Arr[i];
        Arr[i] = Arr[min];
        Arr[min] = temp;
    
    }
}

int main()
{
    int Arr[] = {1, 2, 3, 5, 4, 6, 7, 9, 8};

    int n = sizeof(Arr) / sizeof(Arr[0]);

    SelectionSort(Arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}
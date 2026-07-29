#include <iostream>
using namespace std;

// Bubble sort : Using flag
// Time Complexity : O(n^2)
// Space complexity : O(1)
void BubbleSort(int Arr[], int n)
{
    bool bFlag = false;
    for (int j = n - 1; j >= 0; j--)
    {
        bFlag = false;      // Flag = let no swap
        for (int i = 0; i <= j - 1; i++)
        {

            if (Arr[i] > Arr[i + 1])
            {   
                bFlag = true;   // if swap make true
                int temp = Arr[i];
                Arr[i] = Arr[i + 1];
                Arr[i + 1] = temp;
            }
        }
        if (!bFlag)  // If swap occuerd then return 
        {
            return;
        }
    }
}

int main()
{
    int Arr[] = {1, 2, 3, 5, 4, 6, 7, 9, 8};

    int n = sizeof(Arr) / sizeof(Arr[0]);

    BubbleSort(Arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}
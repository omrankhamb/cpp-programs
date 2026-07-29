#include <iostream>
using namespace std;

// INsertion Sort : selectin a element if and compairing its value to its previous element if previous element is greter move forward until condition breaks if breaks then rplace empty space with the selected element
// Time Complexity : O(n^2)
// Space complexity : O(1)
void SelectionSort(int Arr[], int n)
{
    int i = 0, j = 0, Pivot = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        j = i;
        Pivot = Arr[i];

        if (Arr[j - 1] > Pivot && j >= 1)
        {
            Arr[j] = Arr[j - 1];
            j--;
        }

        Arr[j] = Pivot;
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
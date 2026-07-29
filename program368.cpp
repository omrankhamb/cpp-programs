#include <iostream>
using namespace std;

// INsertion Sort : selectin a element if and compairing its value to its previous element if previous element is greter move forward until condition breaks if breaks then rplace empty space with the selected element
// Time Complexity : O(n^2)
// Space complexity : O(1)

int Partition(int Arr[],int low,int high)
{
    int left,right,pivot = Arr[low];
    left = low;
    right = high;

    while(left < right)
    {   
        /*finding left max */
        while(Arr[left] <=  pivot)
        {
            left++;
        }

        /*Finding minimum from last*/
        while(Arr[right] > pivot)
        {
            right--;
        }

        if(left < right)
        {
            swap(Arr[left],Arr[right]);
        }
    }

    Arr[low] = Arr[right];  // Storing the small in that particular arry
    Arr[right]= pivot;
    return right;
}


void QuickSort(int Arr[],int low,int high)
{
    int pivot = 0;
    if(low < high)
    {
        pivot = Partition(Arr,low,high);

        QuickSort(Arr,low,pivot-1);
        QuickSort(Arr,pivot+1,high);

    }
}
int main()
{
    int Arr[] = {1, 2, 3, 5, 4, 6, 7, 9, 8};

    int n = sizeof(Arr) / sizeof(Arr[0]);

    QuickSort(Arr, 0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}
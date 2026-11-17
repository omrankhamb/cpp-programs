#include <iostream>
using namespace std;

class vector
{
public:
    int *a;
    int size;

    vector(int size)
    {
        a = (int *)calloc(size, sizeof(int));
        this->size = size;
        // Create the dynamic vector in the Heap
    }

    void display()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << a[i] << " "; // => *(a + i) // base address  + i * datatype
            // a is pointe which hold the addres of created array in heap
        }
    }

    void copy(int *arr)
    {
        for (int i = 0; i < this->size; i++)
        {
            a[i] = arr[i];
        }
    }
};

int main()
{
    vector a(4);
    int arr[4] = {1, 2, 3, 4};
    a.display();

    
    cout<<endl;

    // By default the addres is given 
    // the name of the function and the array name give the address of stored location
    a.copy(arr);

    cout<<endl;

    a.display();

    return 0;
}
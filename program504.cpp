#include <iostream>
using namespace std;


// default data types
template<class T = int>
class vector
{
public:
    T *a;
    int size;

    vector(int size)
    {
        a = (T *)calloc(size, sizeof(T));
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

    void copy(T *arr)
    {
        for (int i = 0; i < this->size; i++)
        {
            a[i] = arr[i];
        }
    }
};

int main()
{

    // if i am create 
    vector<float>a(4);
    float arr[4] = {1.2f, 3.4f, 5.8f, 4.34f};
    a.display();

    
    cout<<endl;

    // By default the addres is given 
    // the name of the function and the array name give the address of stored location
    a.copy(arr);

    cout<<endl;

    a.display();

    return 0;
}
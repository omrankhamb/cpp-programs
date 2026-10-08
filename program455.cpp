#include<iostream>
using namespace std;


class MaxHeap
{
    int *arr;
    int size;
    int totalSize;

    public :
    MaxHeap(int n )
    {
        this->size = 0;
        this->totalSize = n;
        this->arr = new int[n];
    }

    void Insert(int data)
    {
        if(this->size == this->totalSize)
        {
            cout<<"Heap is overflow\n";
            return;
        }


        arr[size] = data;
        int index = size;
        size++;

       
        while(index >= 0 && arr[(index-1)/2] < arr[index])
        {
            
            swap(arr[(index-1)/2] , arr[index]);
            index = (index-1)/2;
        }

        cout<<"data is Addes in heap : "<<data<<endl;
        
    }


    void display()
    {
        int i = 0;

        cout<<"Element Present in the MaxHeap is\n";

        for(int i = 0 ;  i < this->size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    void Heapify(int idx)
    {


        int largest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;

        if(left <= this->size && arr[largest] <= arr[left])
        {
            largest = left;
        }

        if(right <= this->size && arr[largest] <= arr[right])
        {
            largest = right;
        }


        if(largest != idx)
        {
            swap(arr[largest] , arr[idx]);
            Heapify(largest);
        }

        
    }

    // Delete Operstion in Heap is only from the Root Position
    void Delete()
    {
        if(this->size == 0)
        {
            cout<<"Heap is underflow"<<endl;
            return;
        }

        arr[0] = arr[size-1];
        arr[0] = arr[size-1];
        size--;

        if(this->size == 0)
        {
            return;
        }

        Heapify(0);
    }
};

int main()
{

    MaxHeap obj(6);

    obj.Insert(14);
    obj.Insert(4);
    obj.Insert(5);
    obj.display();

    obj.Insert(21);
    obj.Insert(24);
    obj.display();

    obj.Delete();
    obj.display();

    return 0;
}
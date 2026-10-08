#include<iostream>
using namespace std;

class MaxHeap
{ 
        int *arr;
        int size;

        int total_size;

        public : 

        MaxHeap(int n )
        {
            arr = new int[n];
            size = 0;
            total_size = n;
        }

        void insert(int value)
        {
            if(size == total_size)
            {
                cout<<"Heap OverFlow";
                return ;
            }

            arr[size] = value;
            int index = size;
            size++;

            // Compare it with its parent

            while(index > 0 && arr[(index-1)/2] < arr[index])
            {
                swap(arr[index] , arr[(index - 1)/2]);
                index = (index - 1)/2;
            }

            cout<<arr[index]<<" Is inserted in Heap"<<endl;

        }

        void print()
        {
            for(int i = 0 ; i < size ; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }


        void Heapify(int index)
        {
            int largest = index;
            int left = 2*index + 1;
            int right = 3 * index + 2;

            if(left < this->size && arr[left] > largest)
            {
                largest = left;
            }

            if(right < this->size && arr[right] > arr[largest])
            {
                largest = right;
            }

            if(largest != index)
            {
                swap(arr[largest] , arr[index]);
                Heapify(largest);
            }
        }

        void Delete()
        {
            if(this->size == 0)
            {
                cout<<"Heap is underflow\n";
                return;
            }

            cout<<"The element is Deleted : "<<arr[0]<<endl;
            arr[0] = arr[this->size - 1];
            this->size--;

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

    obj.insert(4);
    obj.insert(14);
    obj.insert(11);
    obj.Delete();
    obj.print();
    obj.insert(114);
    obj.insert(24);
    obj.insert(1);
    obj.print();
    obj.insert(21);

    obj.print();
    
    
    return 0;
}
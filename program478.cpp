#include<iostream>
using namespace std;

class MaxHeap
{
    public : 
        int *arr;
        int currentSize;
        int totalSize;

        MaxHeap(int size)
        {
            this->totalSize = size;
            this->currentSize = 0;
            arr = new int[size];
        }


        void Heapify(int idx)
        {
            int largest = idx;
            int left = 2 *  idx + 1;
            int right = 2 * idx + 2;

            if(left < this->currentSize && arr[largest] < arr[left])
            {
                largest = left;
            }

            if(right < this->currentSize && arr[largest] < arr[right])
            {
                largest = right;
            }

            if(largest != idx)
            {
                swap(arr[largest] , arr[idx]);
                Heapify(largest);
            }

        }

        void Delete()
        {
            if(this->currentSize == 0)
            {
                cout<<"Heap is Underflow"<<endl;
                return;
            }

            arr[0] = arr[this->currentSize - 1];
            this->currentSize--;
            Heapify(0);
        }

        void insert(int data)
        {
            if(this->currentSize == this->totalSize)
            {
                cout<<"heap is overflow"<<endl;
                return;
            }

            arr[this->currentSize] = data;

            int idx = this->currentSize;
            this->currentSize++;

            while(idx > 0 && arr[(idx - 1)/2] < arr[idx])
            {
                swap(arr[(idx -1 )/2] , arr[idx]);
                idx = (idx - 1)/2;
            }
        }

        void display()
        {
            for(int i = 0 ; i < this->currentSize ; i++)
            {
                cout<<this->arr[i]<<" ";
            }
            cout<<endl;
        }

        int top()
        {
            return arr[0];
        }

        int size()
        {
            if(this->currentSize == 0)
            {
                return 0;
            }
            return this->currentSize;
        }


};


int main()
{

    MaxHeap *obj = new MaxHeap(5);
    obj->insert(31);
    obj->insert(41);
    obj->insert(21);
    obj->insert(51);
    obj->insert(11);

    obj->display();

    while(obj->size() != 0)
    {
        cout<<obj->top()<<endl;
        obj->Delete();
    }
    return 0;
}
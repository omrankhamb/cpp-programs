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
};      

int main()
{
    MaxHeap obj(6);

    obj.insert(4);
    obj.insert(14);
    obj.insert(11);
    obj.print();
    obj.insert(114);
    obj.insert(24);
    obj.insert(1);
    obj.print();

    obj.insert(21);
    
    
    return 0;
}
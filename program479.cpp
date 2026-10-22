#include<iostream>
#include<vector>
#include<queue>
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

class Solution
{
    public : 
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Sum of the Difference Element Between top K1 and K2 Smallest Element
    Maintain the TWo heap : for the First k1 Element and the K2 smallest element
    and Substract the K2 and K1
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////
    long long sumBetweenTwoKth(long long A[] ,  int K1 , int K2 , int N)
    {
        // Creating the MaxHeap
        priority_queue<long long> p1;
        priority_queue<long long> p2;

        // find k1 element in P1
        for(long long i = 0 ; i < K1 ; i++)
        {
            p1.push(A[i]);
        }

        // Find the K2 Element in P2
        for(long long i = 0 ; i < K2 ; i++)
        {
            p2.push(A[i]);
        }

        for(long long i = K1 ; i < N ; i++)
        {
            if(A[i] < p1.top())
            {
                p1.pop();
                p1.push(A[i]);
            }
        }

        for(long long i = K2 ; i < N ; i++)
        {
            if(A[i] < p1.top())
            {
                p2.pop();
                p2.push(A[i]);
            }
        }

        // We Created the Two heap
        // Sum of the First Maxheap and the sum Of the Second Maxheap

        long long sum1 = 0;
        long long sum2 = 0;

        while(!p1.empty())
        {
            sum1 += p1.top();
            p1.pop();
        }

        while(!p2.empty())
        {
            sum2 += p2.top();
            p2.pop();
        }

        return sum2 - sum1;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Question : Merge two Binary MaxHeap 
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Heapify(vector<int> &ans , int idx , int n)
    {
        int largest = idx;
        int left = 2 * idx  +1;
        int right = 2 * idx + 2;

        if(left < n  && ans[largest] < ans[left])
        {
            largest = left;
        }

        if(right < n && ans[largest] < ans[right])
        {
            largest = right;
        }

        if(largest != idx)
        {
            swap(ans[largest], ans[idx]);
            Heapify(ans , largest  , n);
            

        }
    }
    vector<int> mergeHeaps(vector<int> &a , vector<int> &b)
    {
        vector<int> ans;
        int n = a.size();
        int m = b.size();

        for(int i = 0 ; i < n ; i++)
        {
            ans.push_back(a[i]);
        }

        for(int i = 0 ; i < m ; i++)
        {
            ans.push_back(a[i]);
        }

        n = ans.size();

        for(int i = n/2 - 1 ; i>= 0 ; i--)
        {
            Heapify(ans , i , n);
        }


        return ans;


    }
};


int main()
{

    return 0;
}
#include<iostream>
using namespace std;



void insertHeap(int *arr, int *cs , int *totalSize , int data)
{
    if(*cs == *totalSize)
    {
        cout<<"Heap is overFlow"<<endl;
        return;
    }

    arr[(*cs)] = data;
    int idx = (*cs);
    (*cs)++;

    while (idx >=1 && arr[(idx - 1)/2] < arr[idx])
    {
        swap(arr[idx] , arr[(idx - 1) / 2]);
        idx = (idx - 1)/2;
    }
    
    cout<<"Data Is insert In the Heap"<<endl;

}

void display(int *arr , int *cs)
{
    for(int i =  0 ; i < (*cs)  ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void Heapify(int *arr , int idx , int n)
{
    int largest = (idx);
    int left =  2 * (idx) + 1;
    int right  = 2 * (idx) + 2;

    if(left < (n) && arr[largest] < arr[left])
    {
        largest = left;
    }

    if(right < (n) && arr[largest] < arr[right])  
    {
        largest = right;
    }

    if(largest != (idx))
    {
        swap(arr[largest] , arr[(idx)]);
        Heapify(arr , largest , n);
    }
}

void deleteHeap(int *arr , int*cs , int *n)
{
    if((*cs) == 0)
    {
        cout<<"Heap is underFlow"<<endl;
        return;
    }

    swap(arr[0] , arr[(*cs)-1]);
    (*cs)--;

    if((*cs) == 0)
    {
        return;
    }

    Heapify(arr , 0 , (*cs));

}

void heapSort(int *arr , int *cs , int *n)
{
    int heapSize = (*cs);

    while(heapSize >= 1)
    {
        swap(arr[0] , arr[heapSize-1]);
        heapSize--;
        Heapify(arr,0 , heapSize);
    }
}

int maxInHeap(int *arr)
{
    return arr[0];
}


int main()
{

    int * arr = NULL;
    int n = 0;
    int cs = 0 ;

    cout<<"Enter the size of heap  :"<<endl;
    cin>>n;

    arr = new int[n];

    int choice , data;

    do
    {   
        cout<<"Enter 1 to insertHeap()"<<endl;
        cout<<"Enter 2 To deleteHeap()"<<endl;
        cout<<"Enter 3 To heapSort()"<<endl;
        cout<<"Enter 4 To maxInHeap()"<<endl;
        cout<<"Enter 5 To display()"<<endl;
        cout<<"Enter the Choice : "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the data  : "<<endl;
            cin>>data;
                insertHeap(arr , &cs , &n , data);
                break;
        
            case 2 : 
                deleteHeap(arr , &cs , &n);
                break;
            
            case 3 : 
                heapSort(arr , &cs , &n);
                break;
            
            case 4 : 
                cout<<"maxelement in Heap  : "<<maxInHeap(arr)<<endl;
                break;

            case 5 : 
                display(arr , &cs);
                break;
                    
        default:
            break;
        }
    }while(choice);  
    return 0;
}
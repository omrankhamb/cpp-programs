#include<iostream>
using namespace std;


int stack[5];
int MAX_SIZE = 5;
int front = -1;
int rear = -1;

void push(int data)
{
    if(rear == MAX_SIZE - 1)
    {
        cout<<"queue Is full"<<endl;
    }
    else
    {
        if(front == -1)
            front  = 0;

        stack[++rear];
        cout<<"Data is added success fully"<<endl;
    }
}

int pop()
{
    // two codition when the queue is full or either the queue is full 
    // eigthr queuq is not created 
    // either queue is full
    if(front == -1 || front > rear)
    {
        cout<<"the queue is now become empty"<<endl;
    }
    else
    {
        // check the now if the element is the last 
        int item = stack[front++];
        
        if(front > rear)
        {
            front = - 1 , rear - 1;
        }

        return item;

    }
}

int main()
{
    return 0;
} 
#include<iostream>
using namespace std;

int MAX_SIZE = 5;
int queue[5];
int front = -1;
int rear = -1;

void push(int data)
{
    // either the queue is full
    // then return 
    if(front == (rear + 1) % MAX_SIZE);
    {
        cout<<"Queue is full";
        return;
    }
    else
    {
        if(front == -1){ 
            front = 0;
        }
        queue[rear] = data;
        rear = (rear + 1) % MAX_SIZE;
    }
}

void pop()
{
    if(front  == 1)
    {


    }
    else
    {
        int data = queue[front];
    }
}
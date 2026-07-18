#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

        node(int );
};

node:: node(int data)
{
    this->data = data;
    this->next = NULL;
}

class Stack
{   
    public :
        node *first;
        int iCnt;

    public : 
        Stack();

        void Dispaly();
        int iCount();

        void Push(int );
        int Pop();
        int Pip();
        
};

Stack :: Stack()
{}

void Stack :: Dispaly()
{}

int Stack :: iCount()
{}

void Stack :: Push(int )
{}
int Stack :: Pop()
{}
int Stack :: Pip()
{}

int main()
{
    return 0;
}
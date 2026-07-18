#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

    public :
        node(int );
};

node :: node(int )
{
    this->data = data;
    this->next = NULL;
}


class Queue
{
    public :
        node *first;
        int iCnt;
    
    public :
        Queue();
        void Diaplay();
        int Count();

        void Enqueue();
        void Dequeue();
};

Queue :: Queue()
{}
void Queue ::  Diaplay()
{}

int Queue :: Count()
{
    return this->iCnt;
}

void Queue ::  Enqueue()
{}

void Queue :: Dequeue()
{}

int main()
{
    return 0;
}   
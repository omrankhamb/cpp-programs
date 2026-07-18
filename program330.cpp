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

node :: node(int data )
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
{
    
    this->first = NULL;
    this->iCnt = 0;
}

void Queue ::  Diaplay()
{
    node *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<" |____|\n";
}

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
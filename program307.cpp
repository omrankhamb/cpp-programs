#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;
    
    public :
        SinglyCL();

        int Count();
        void Display();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    } while (temp != this->last->next);

    cout<<"NULL"<<endl;
    
}

int main()
{
    return 0;
}
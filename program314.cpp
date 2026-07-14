#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private :
        PNODE first;
        int iCount = 0;

    public :
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InssertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos();

};

DoublyLL :: DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    while(temp)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<endl;
}
int main()
{
    return 0;
}
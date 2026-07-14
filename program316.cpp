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

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<endl;
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn  = NULL;

    newn  = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn  = NULL;
    PNODE temp = NULL;

    newn  = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
        newn->prev = temp;
    }
    this->iCount++;
}

int main()
{
    int iRet  = 0;
    DoublyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of node are : "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of node are : "<<iRet<<endl;
    return 0;
}
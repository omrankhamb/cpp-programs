#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE head;
        int iCount = 0;
    public : 
       
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DelsteLast();
        void DeleteAtPos(int iPos);

};

SinglyLL::SinglyLL()
{
    this->head = NULL;
    this->iCount = 0;
}

void SinglyLL:: Display()
{
    PNODE temp = NULL;
    temp = this->head;
    
    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
    }
    cout<<"NULL\n";
    
}

int SinglyLL::Count()
{
    return this->iCount;
}

void SinglyLL:: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->head == NULL)
    {
        this->head = newn;
    }
    else
    {
        newn->next = this->head;
        this->head = newn;
    }

    this->iCount++;
}

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);




    return 0;
}
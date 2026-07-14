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

    cout<<endl;    
}

int SinglyCL :: Count()
{
    return this->iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->last->next = this->first;
    this->iCount++;

}


void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;
    }
    this->last->next = this->first;
    this->iCount++;

}

void SinglyCL :: DeleteFirst()
{
    if((this->first == NULL) && (this->last == NULL))
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->last->next;
    }

    this->last->next = this->first;
    this->iCount--;
}

int main()
{
    SinglyCL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of node are : "<<iRet<<endl;


    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of node are : "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of node are : "<<iRet<<endl;

    return 0;
}
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class SinglyLL
{
    private :
        struct node *first;
        int iCount;

    public :
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int );
        void InsertLast(int);
        void InsertAtPos(int ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int );
};

SinglyLL :: SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyLL :: Display()
{
    struct node *temp = NULL;

    temp = this->first;

    while(temp != NULL) 
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL ::  InsertFirst(int iNo)
{
    struct node *newn = NULL;
    newn = new node;
    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->iCount++;
}

void SinglyLL :: InsertLast(int iNo)
{
    struct node *newn = NULL;
    struct node *temp = NULL;
    newn = new node;
    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNo,int iPos)
{
    struct node * newn = NULL;
    struct node * temp = NULL;
    int i  = 0;

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (this->iCount + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        newn = new node;
        newn->data = iNo;
        newn->next = NULL;
        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

void SinglyLL ::  DeleteFirst()
{
    struct node *temp = NULL;
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {   
        temp = this->first;
        this->first = this->first->next;
        delete temp;
    }
    this->iCount--;
}

void SinglyLL ::  DeleteLast()
{   
    struct node *temp = NULL;
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {   
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }
    this->iCount--;
}

void SinglyLL ::  DeleteAtPos(int iPos)
{
    struct node * temp = NULL;
    struct node * target = NULL;
    int i  = 0;

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (this->iCount))
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = temp->next->next;
        delete target;     

        this->iCount--;
    }
}




int main()
{
    int iRet = 0;
    SinglyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;

    dobj.InsertAtPos(100, 3);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;

    dobj.DeleteAtPos(3);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of node are : " << iRet << endl;
    return 0;
}
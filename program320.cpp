#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
private:
    PNODE first;
    int iCount = 0;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL ::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL ::Display()
{
    PNODE temp = NULL;
    temp = this->first;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }

    cout << endl;
}

int DoublyLL ::Count()
{
    return this->iCount;
}

void DoublyLL ::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (this->first == NULL)
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

void DoublyLL ::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (this->first == NULL)
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

void DoublyLL ::InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    if (iPos < 1 || iPos > this->iCount + 1)
    {
        cout << "Invalid Position";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == (this->iCount + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

void DoublyLL ::DeleteFirst()
{
    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCount--;
}

void DoublyLL ::DeleteLast()
{
    PNODE temp = NULL;

    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

void DoublyLL ::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;

    if (iPos < 1 || iPos > this->iCount)
    {
        cout << "Invalid Position";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == (this->iCount))
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

int main()
{
    int iRet = 0;
    DoublyLL dobj;

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
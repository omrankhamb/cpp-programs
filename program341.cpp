#include <iostream>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node<T> *next;
    node<T> *prev;

public:
    node(T data);
};

template <class T>
node<T>::node(T data)
{
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
}

template <class T>
class DoublyLL
{
public:
    node<T> *first;
    int iCnt = 0;

public:
    DoublyLL();
    void Display();
    int Count();

    void InsertFirst(T iNo);
    void InsertLast(T iNo);
    void InsertAtPos(T iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    this->first = NULL;
    this->iCnt = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    node<T> *temp = NULL;

    temp = this->first;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }

    cout << " NULL\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return this->iCnt;
}

template <class T>
void DoublyLL<T>::InsertFirst(T iNo)
{
    node<T> *newn = NULL;

    newn = new node<T>(iNo);

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

    this->iCnt++;
}

template <class T>
void DoublyLL<T>::InsertLast(T iNo)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;

    newn = new node<T>(iNo);

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

    this->iCnt++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T iNo, int iPos)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;
    int i = 0;

    if (iPos < 1 || iPos > this->iCnt + 1)
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == this->iCnt + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn = new node<T>(iNo);

        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCnt++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    node<T> *temp = NULL;
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

        this->first = this->first->next;
        this->first->prev = NULL;

        delete temp;
    }

    this->iCnt--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    node<T> *temp = NULL;
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

    this->iCnt--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    node<T> *temp = NULL;
    int i = 0;

    if (iPos < 1 || iPos > this->iCnt)
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == this->iCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        this->iCnt--;
    }
}

int main()
{
    DoublyLL<int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    sobj.InsertAtPos(100, 3);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    sobj.DeleteAtPos(3);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of element are : " << iRet << endl;

    return 0;
}

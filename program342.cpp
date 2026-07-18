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
class SinglyCL
{
public:
    node<T> *first;
    node<T> *last;
    int iCnt = 0;

public:
    SinglyCL();
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
SinglyCL<T>::SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCnt = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    node<T> *temp = NULL;

    temp = this->first;

    do
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    } while (temp != last->next);

    cout << "\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return this->iCnt;
}

template <class T>
void SinglyCL<T>::InsertFirst(T iNo)
{
    node<T> *newn = NULL;

    newn = new node<T>(iNo);
    if (this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCnt++;
}

template <class T>
void SinglyCL<T>::InsertLast(T iNo)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;

    newn = new node<T>(iNo);

    if (this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        newn->prev = this->last;
        this->last = this->last->next;
    }

    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCnt++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T iNo, int iPos)
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
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCnt++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if (this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if (this->first == this->last)
    {
        delete this->first;
        this->last = NULL;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCnt--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if (this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if (this->first == this->last)
    {
        delete this->first;
        this->last = NULL;
        this->first = NULL;
    }
    else
    {
        this->last = this->last->prev;
        delete this->last->next;   
    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCnt--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
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
    SinglyCL<int> sobj;
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

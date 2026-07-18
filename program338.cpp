#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int);
};

node ::node(int data)
{
    this->data = data;
    this->next = NULL;
}

class SinglyLL
{
public:
    node *first;
    int iCnt = 0;

public:
    SinglyLL();
    void Display();
    int iCount();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos();
};

SinglyLL ::SinglyLL()
{
    this->first = NULL;
    this->iCnt = 0;
}

void SinglyLL ::Display()
{
}

int SinglyLL ::iCount()
{
}

void SinglyLL ::InsertFirst(int iNo)
{
}

void SinglyLL ::InsertLast(int iNo)
{
}

void SinglyLL ::InsertAtPos(int iNo, int iPos)
{
}

void SinglyLL ::DeleteFirst()
{
}

void SinglyLL ::DeleteLast()
{
}

void SinglyLL ::DeleteAtPos()
{
}

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    return 0;
}

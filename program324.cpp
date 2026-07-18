#include<iostream>
using namespace std;

#pragma pack(1)
class node
{
    public :
        int data;
        node *next;
    public :
        node(int iNo);
};

// Give the cretated node
node:: node(int data)
{
    this->data = data;
    this->next = NULL;
}

#pragma pack(1)
class Stack
{   
    public :
        node *first;
        int iCnt;

    public : 
        Stack();

        void Dispaly();
        int Count();

        void Push(int );
        int Pop();
        int Pip();
        
};

Stack :: Stack()
{
    this->first = NULL;
    this->iCnt = 0;
}

void Stack :: Dispaly()
{}

int Stack :: Count()
{
    return this->iCnt;
}

void Stack :: Push(int iNo)
{
    node *newn = NULL;
    newn = new node(iNo);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->iCnt++;
}

int Stack :: Pop()
{}

int Stack :: Pip()
{}

int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(91);

    iRet = sobj.Count();
    cout<<"Elements are : "<<iRet<<endl;
    return 0;
}
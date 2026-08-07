#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

public:
    node(int);
};

node ::node(int iNo)
{
    this->data = iNo;
    this->next = NULL;
}

class priortyQueue
{
public:
    node *first;
    node *last;
    int iCnt;


public:
    priortyQueue()
    {
        this->first = NULL;
        this->last = NULL;
        this->iCnt = 0;
    }

    void Push(int iNo)
    {
        node *newn = new node(iNo);

        if (this->first == NULL && this->last == NULL)
        {
            this->first = newn;
            this->last = newn;
        }
        else
        {
        }
    }
};

class
{

    public :    
}
int main()
{
    return 0;
}
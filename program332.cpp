#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

    public :
        node(int );
};

node :: node(int data)
{
    this->data = data;
    this->next = NULL;
}


class Queue
{
    public :
        node *first;
        int iCnt;
    
    public :
        Queue();
        void Display();
        int Count();

        void Enqueue(int);
        void Dequeue();
};

Queue :: Queue()
{
    this->first = NULL;
    this->iCnt = 0;
}

void Queue ::  Display()
{
    node *temp = NULL;

    temp = this->first;

    while(temp!= NULL)
    {
        cout<<" | "<<temp->data<<" |"<<endl;
        temp = temp->next;
    }

}

int Queue :: Count()
{
    return this->iCnt;
}

void Queue ::  Enqueue(int iNo)
{
    node *newn = NULL;

    newn = new node(iNo);

    newn->next = this->first;
        this->first = newn;
    this->iCnt++;
}

void Queue :: Dequeue()
{}

int main()
{
    Queue obj;
    int iRet = 0;

    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(91);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of element : "<<iRet<<endl;
    return 0;
}   
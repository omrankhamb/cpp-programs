#include<iostream>
using namespace std;

template<class T>
class node
{
    public :
        T data;
        node *next;

    public :
        node(T );
};

template<class T>
node<T>:: node(T data)
{
    this->data = data;
    this->next = NULL;
}

template<class T>
class Queue
{
    public :
        node<T> *first;
        int iCnt;
    
    public :
        Queue();
        void Display();
        int Count();

        void Enqueue(T);
        void Dequeue();
};

template<class T>
Queue<T> :: Queue()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void Queue<T> ::  Display()
{
    node<T> *temp = NULL;

    temp = this->first;

    while(temp!= NULL)
    {
        cout<<" | "<<temp->data<<" |"<<endl;
        temp = temp->next;
    }

}

template<class T>
int Queue<T> :: Count()
{
    return this->iCnt;
}

template<class T>
void Queue<T> ::  Enqueue(T iNo)
{
    node<T> *newn = NULL;

    newn = new node<T>(iNo);

    newn->next = this->first;
        this->first = newn;
    this->iCnt++;
}

template<class T>
void Queue<T> :: Dequeue()
{
    node<T> *temp  = NULL;

    if(this->first == NULL)
    {
        cout<<"Queue is Empty\n";
        return;
    }
    else
    {
        temp = this->first;
        while(temp ->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;  
        this->iCnt--;
    }

}

int main()
{
    Queue <float>obj;
    int iRet = 0;

    obj.Enqueue(11.34f);
    obj.Enqueue(21.34f);
    obj.Enqueue(51.34f);
    obj.Enqueue(91.43f);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of element : "<<iRet<<endl;

    obj.Dequeue();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of element : "<<iRet<<endl;

    return 0;
}   
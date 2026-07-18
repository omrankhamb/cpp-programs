#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
class node
{
    public :
        T data;
        node<T> *next;
    public :
        node(T iNo);
};

// Give the cretated node
template<class T>
node<T>:: node(T data)
{
    this->data = data;
    this->next = NULL;
}

#pragma pack(1)
template<class T>
class Stack
{   
    public :
        node<T> *first;
        int iCnt;

    public : 
        Stack();

        void Dispaly();
        int Count();

        void Push(T );
        T Pop();
        T Pip();
        
};

template<class T>
Stack<T> :: Stack()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void Stack<T>:: Dispaly()
{
    node<T> *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<" |____|\n";
}

template<class T>
int Stack<T> :: Count()
{
    return this->iCnt;
}

template<class T>
void Stack<T> :: Push(T iNo)
{
    node<T> *newn = NULL;
    newn = new node<T>(iNo);

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

template<class T>
T Stack<T> :: Pop()
{
    T iValue = 0;
    node <T>*temp = NULL;

    if(this->first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = this->first->data;
        temp = this->first;
        this->first = this->first->next;
        delete temp;

        this-iCnt--;

        return iValue;

    }

}

template<class T>
T Stack<T> :: Pip()
{
    return this->first->data;
}

int main()
{
    Stack <float>sobj;
    int iRet = 0;

    sobj.Push(11.2f);
    sobj.Push(21.3f);
    sobj.Push(51.4f);
    sobj.Push(91.6f);

    sobj.Dispaly();
    iRet = sobj.Count();
    cout<<"Elements are : "<<iRet<<endl;

    iRet = sobj.Pop();
    cout<<"Popped Element is : "<<iRet<<endl;

    sobj.Dispaly();
    iRet = sobj.Count();
    cout<<"Elements are : "<<iRet<<endl;

    iRet = sobj.Pip();
    cout<<"Element of Top of stack is : "<<iRet<<endl;

    sobj.Dispaly();
    iRet = sobj.Count();
    cout<<"Elements are : "<<iRet<<endl;

    return 0;
}
#include<iostream>
using namespace std;

#pragma pack(1)
class node 
{
    public:
        int data;
        node * next;

    public :
        node(int iNo)
        {
            this->data = iNo;
            this->next = NULL;
        }
};

#pragma pack(1)
class MyCircularQueue {
public:
    node * first;
    node * last;
    int iCnt;
    int Size;

    MyCircularQueue(int k) {
        this->first = NULL;
        this->last = NULL;
        this->iCnt = 0;
        this->Size = k;
        
    }

    void Display()
    {
        node * temp = NULL;
        temp = this->first;

        while(temp!= this->last)
        {
            cout<<"|"<<temp->data<<"|=><=";
            temp = temp->next;
        }
        cout<<"|"<<temp->data<<"|";
        cout<<endl;

    }
    
    bool enQueue(int value) {

        if(this->iCnt >= this->Size)
        {
            return false;
        }

        node * newn = new node(value);

        if(this->first == NULL && this->last == NULL)
        {
            this->first = newn;
            this->last = newn;
        }
        else
        {
            this->last->next = newn;
            this->last = newn;
        }  
        this->iCnt++;
        this->last->next = this->first;
        return true;     
        
    }
    
    bool deQueue() {
        node * temp = NULL;
        if(this->first == NULL && this->last == NULL)
        {
            return false;
        }
        else if(this->first == this->last)
        {
            delete this->first;
            this->first = NULL;
            this->last = NULL;
        }
        else
        {
            temp = this->first;
            this->first = this->first->next;
        }

        
        if(this->last != NULL)
        {
            this->last->next = this->first;
            
        }
        
        delete temp;
        this->iCnt--;
        return true;        
    }
    
    int Front() {
        if(this->first == NULL && this->last == NULL)
        {
            return -1;
        }


        return this->first->data;
    }
    
    int Rear() {
            if(this->first == NULL && this->last == NULL)
            {
                return -1;
            }


        return this->last->data;
    }
    
    bool isEmpty() {
        if(this->first == NULL && this->last == NULL)
        {
            return true;
        }

        return false;
    }
    
    bool isFull() {
        if(this->iCnt == this->Size)
        {
            return true;
        }

        return false;
    }


    // Reveersing the queue using recursion
    void Reverse()
    {
        if(this->isEmpty())    
        {
            return;
        }

        int x = this->Front();
        this->deQueue();

        Reverse();
        this->enQueue(x);
    }
};


int main()
{
    MyCircularQueue obj(5);

    obj.enQueue(1);
    obj.enQueue(2);
    obj.enQueue(3);
    obj.enQueue(4);
    obj.enQueue(5);

    obj.Display();
    obj.Reverse();
    obj.Display();
    return 0;

}
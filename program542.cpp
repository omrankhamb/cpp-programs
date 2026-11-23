#include <iostream>
#include <queue>
#include <vector>
#include <bits/c++config.h>
using namespace std;

template<class T>
class node
{
    public : 
        T data;
        node<T> *next;

        node( T data)
        {
            this->data = data;
            this->next = NULL;
        }
};

template<class T>
class Stack
{
    public : 
    node <T> *head;

    Stack()
    {
        head = NULL;
    }

    void push(int data)
    {
        node <T> *newn = new node<T>(data);

        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head = newn;
        }
    }   

    void pop()
    {
        if(head == NULL)
        {
            return;
        }
        if(head->next == NULL)
        {
            head = NULL;
        }

        head = head->next;
    }
};
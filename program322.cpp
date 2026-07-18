#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

        node(int );
};

class Stack
{   
    public :
        node *first;
        int iCnt;

    public : 
        Stack();

        void Dispaly();
        int iCount();

        void Push(int );
        int Pop();
        int Pip();
        
};

int main()
{
    return 0;
}
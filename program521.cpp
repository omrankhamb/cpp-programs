#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next;
};

node * temp = NULL;

void push(int data)
{
    node * newn = new node;
    newn->data = data;
    newn->next = NULL;

    newn->next = temp;
    temp = newn;
}


void pop()
{
    if(temp == NULL)
    {
        cout<<"Stack is underFlow"<<endl;
        return;
    }

    cout<<temp->data;
    temp = temp->next;
}

void display()
{
    node * newn = NULL;
    newn = temp;

    while(newn != NULL)
    {
        cout<<newn->data<<"->";
        newn = newn->next;
    }

    cout<<endl;
}

int main()
{

    int data;
    int choice;

    do
    {   
        cout<<"Enter 1 : the data to push in stack : "<<endl;
        cout<<"Enter 2 : To pop the data from the stack : "<<endl;
        cout<<"Enter 3 : To Display the stack Element : "<<endl;
        cout<<"Entter the choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the data  : "<<endl;
            cin>>data;
            push(data);
                break;
        
            case 2 : 
                pop();
                break;
            
            case 3 : 
                display();
                break;
                    
        default:
            break;
        }
        

    }while(choice);
    return 0;
}
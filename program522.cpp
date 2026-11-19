#include<iostream>
using namespace std;


struct node 
{
    int data;
    node * next;
};

node * head = NULL;


node * createnode(int data)
{
    node * createnode = new node;
    createnode->data = data;
    createnode->next = NULL;

    return  createnode;
}

void insertFirst(int data)
{
    node * newn = createnode(data);

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

void insertLast(int data)
{
    node * newn = createnode(data);

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        node * temp = NULL;
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void deleteFirst()
{
    if(head == NULL)
    {
        cout<<"LinkedList is Empty"<<endl;
    }
    else if(head->next == NULL)
    {
        head = head->next;
    }
    else
    {
        head = head->next;
    }
}


void deleteLast()
{
    if(head == NULL)    
    {
        cout<<"Linkde list is Empty"<<endl;
    }
    else if(head->next == NULL)  
    {
        head = NULL;
    }
    else
    {
        node * temp = head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
}

void display()
{
    node * temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<endl;
}

int main()
{

    int data;
    int choice;

    do
    {   
        cout<<"Enter 1 to InsertFirst()"<<endl;
        cout<<"Enter 2 To insertlast()"<<endl;
        cout<<"Enter 3 To DeleteFirst"<<endl;
        cout<<"Enter 4 To DeleteLast()"<<endl;
        cout<<"Enter 5 To Display()"<<endl;
        cout<<"Enter the Choice : "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the data  : "<<endl;
            cin>>data;
                insertFirst(data);
                break;
        
            case 2 : 
                cout<<"Enter the data  : "<<endl;
                cin>>data;
                insertLast(data);
                break;
            
            case 3 : 
                deleteFirst();
                break;
            
            case 4 : 
                deleteLast();
                break;

            case 5 : 
                display();
                break;
                    
        default:
            break;
        }
        

    }while(choice);
    
    return 0;
}
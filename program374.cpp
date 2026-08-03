#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;

};

void spitList(struct node *head,struct node **head1,struct node **head2)
{
    struct node * slowPtr = head;
    struct node * fastPtr = head;

    if(head == NULL)
    {
        return;
    }
    /*
        if (fatPtr == NULL) then the  loop is odd number
        if(fastPtr->next == NULL) then the loop is constain even numbers
    */

    while(fastPtr->next != head && fastPtr->next->next != head )
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    if(fastPtr->next->next == head)
    {
        fastPtr = fastPtr->next;
    }

    // set the head pointer to first half

    (*head1) = head;

    if(head->next != head)
    {
        *head2 = slowPtr->next;
    }

    fastPtr->next = slowPtr->next;
    slowPtr->next = head; 
}


int main()
{

    return 0;
}
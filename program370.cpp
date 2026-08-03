#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Singly_LL
{
    public :
        node * first;
        int Count;
        Singly_LL()
        {
            this->first = NULL;
            this->Count = 0;
        }


    void Display()
    {
        node * temp = NULL;
        temp = this->first;

        while(temp != NULL)
        {
            cout<<temp->data<<" => ";
            temp = temp->next;
        }

        cout<<"NULL"<<endl;
    }

    void InsertFirst(int iNo)
    {
        node * newn = new struct node;

        newn->data = iNo;
        newn->next = NULL;

        if(this->first == NULL)
        {
            this->first = newn;
        }
        else
        {
            newn->next = this->first;
            this->first  = newn;
        }

        this->Count++;

    }

    void InsertLast(int iNo)
    {
        node *newn = new struct node;
        node *temp = NULL;

        newn->data = iNo;
        newn->next = NULL;

        if(this->first == NULL)
        {
            this->first = newn;
        }
        else
        {
            temp = this->first;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        this->Count++;
    }

    void InsertAtPos(int iPos,int iNo)
    {
        node * newn = NULL;
        node *temp = NULL;
        int iCnt = 0;
        int i = 0;
        
        if(iPos < 1 || iPos > this->Count + 1)
        {
            return;
        }

        if(iPos == 0)
        {
            InsertFirst(iNo);
        }
        else if(iPos == this->Count + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            temp = this->first;

            for(i = 1 ; i < iPos - 1 ; i++)
            {
                temp = temp->next;
            }

            newn = new struct node;
            newn->data = iNo;
            newn->next = NULL;

            newn->next = temp->next;
            temp->next = newn;

        }


    }

    void DeleteFirst()
    {
        node *temp = NULL;

        if(this->first = NULL)
        {
            return;
        }
        else if(this->first->next == NULL)
        {
            delete this->first;
            this->first = NULL;
        }
        else
        {
            temp = this->first;
            this->first = this->first->next;
            delete temp;
        }

        this->Count--;
    }

    void DeleteLast()
    {
        node *temp = NULL;

        if(this->first == NULL)
        {
            return;
        }
        else if(this->first->next == NULL)
        {
            delete this->first;
            this->first = this->first->next;
        }
        else
        {
            temp = this->first;

            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }

            delete temp->next;
            temp->next = NULL;
        }

        this->Count--;
    }

    void DeleteAtPos(int iPos)
    {
        node *target = NULL;
        node *temp = NULL;
        int i = 0;

        if(iPos < 1 || iPos > this->Count)
        {
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == this->Count)
        {
            DeleteLast();
        }
        else
        {
            target = this->first;
            for(i = 1 ; i < iPos - 1 ; i++)
            {
                temp = temp->next;
            }

                target = temp->next;
                temp->next = temp->next->next;

        }
    }


    // Reverse Display

    void Reverse()
    {
        Reversedummy(this->first);
        cout<<endl;

    }

    void Reversedummy(node * temp)
    {
        if(temp == NULL)
        {
            return;
        }
        Reversedummy(temp->next);
        cout<<temp->data<<" => ";
    }

    bool Even()
    {
        node * temp = this->first;

        while(temp && temp->next)
        {
            temp = temp->next->next;
        }

        if(temp == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Singly_LL obj;
    bool bRet = false;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    obj.Reverse();

    if(obj.Even())
    {
        cout<<"Lenghth is Even\n";
    }
    else
    {
        cout<<"Lenght is Odd\n";    
    }



    return 0;
}

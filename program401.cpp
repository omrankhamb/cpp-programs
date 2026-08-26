#include<iostream>
using namespace std;

class node
{
    public :
        node * left;
        node * right;
        int data;

    node(int iNo)
    {
        this->data = iNo;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST
{
    public :
    node * root;
        BST()
        {
            this->root = NULL;
        }

    void Insert(int data)
    {
        node * newn = NULL;
        newn = new node(data);

        if(this->root == NULL)
        {
            this->root  = newn;
        }
        else
        {
            node * temp = NULL;
            temp = this->root;

            while(true)
            {
                if(data < temp->data)
                {
                    if(temp->left == NULL)
                    {
                        temp->left = newn;
                        break;
                    }
                    temp = temp->left;
                }
                else if(data > temp->data)
                {
                    if(temp->right == NULL)
                    {
                        temp->right = newn;
                        break;
                    }
                    temp = temp->right;
                }
                else if(temp->data == data)
                {
                    delete newn;
                    cout<<"Node is already present"<<endl;
                    return;
                }
            }
        }
    }

    void leftAdditionX(node * temp,int *sum)
    {
        if(temp == NULL)
        {
            return;
        }
        if(temp != NULL && temp->left != NULL && temp->left->left == NULL && temp->left->right == NULL)
        {
            *sum = *sum + temp->left->data;
        }

        

        leftAdditionX(temp->left,sum);
        leftAdditionX(temp->right,sum);
    }

    int leftAddition()
    {
        int sum = 0;
        leftAdditionX(this->root , &sum);
        return sum;        
    }
};

int main()
{
    BST obj;

    obj.Insert(3);
obj.Insert(9);
obj.Insert(20);
obj.Insert(15);
obj.Insert(7);


    cout<<obj.leftAddition();
    return 0;
}
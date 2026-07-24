#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *rchild;
        node *lchild;

        node(int);

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;



node :: node(int iNo)
{
    this->data = iNo;
    this->lchild = NULL;
    this->rchild = NULL;
}

class BST
{
    public :
        PNODE first;
        int iCnt;
        
    public :
        BST();
        int Count();

        void Inorder();
        void Preorder();
        void PostOrder();

        void Insert(int iNo);
        bool Search();
        int CountLeafNode();
        int CountParentNode();      

};

BST :: BST ()
{
    this->first = NULL;
    this->iCnt = 0;
}

int BST :: Count()
{
    return this->iCnt;
}

void BST :: Insert(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new node(iNo);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(1)
        {
            if(iNo  < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;      // Important
                }
                temp = temp->lchild;
            }
            else if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;      // Important
                }
                temp = temp->rchild;
            }
            else if(temp->data == iNo)
            {
                cout<<"Node is present\n";
                return;
            }

        }
    }

    this->iCnt++;
}

void BST :: Inorder()
{}

void BST :: Preorder()
{}

void BST :: PostOrder()
{}

bool BST :: Search()
{}


int main()
{
    return 0;
}
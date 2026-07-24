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

        void Inorder(PNODE);
        void Preorder(PNODE);
        void PostOrder(PNODE);

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

void BST :: Inorder(PNODE temp)
{
    if(temp == NULL)
    {
        return ;
    }

    Inorder(temp->lchild);
    cout<<temp->data<<"  ";
    Inorder(temp->rchild);
}

void BST :: Preorder(PNODE temp)
{
    if(temp == NULL)
    {
        return ;
    }
    cout<<temp->data<<"  ";
    Inorder(temp->lchild);
    Inorder(temp->rchild);
}

void BST :: PostOrder(PNODE)
{}

bool BST :: Search()
{}


int main()
{
    BST obj;
    int iRet  = 0;
    bool bRet = false;
    
    obj.Insert(11);
    obj.Insert(7);
    obj.Insert(5);
    obj.Insert(17);
    obj.Insert(21);
    obj.Insert(27);
    obj.Insert(19);
    obj.Insert(4);
    obj.Insert(14);
    obj.Insert(9);
    obj.Insert(15);

    iRet = obj.Count();
    obj.Inorder(obj.first);
    cout<<"\nNumber of node are : "<<iRet<<endl;
    
    return 0;
}
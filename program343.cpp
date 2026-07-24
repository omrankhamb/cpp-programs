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
{}

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
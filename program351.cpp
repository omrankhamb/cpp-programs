#include <iostream>
using namespace std;

template<class T>
class node
{
public:
    int data;
    node<T> *rchild;
    node<T> *lchild;

    node(int data)
    {
        this->data = data;
        this->rchild = NULL;
        this->lchild = NULL;
    }
};

template<class T>
class BST
{
public:
    node<T> *first;
    int iCnt;

public:
    BST();
    int Count();

    void Display(node<T> *temp);
    void Insert(int);

    void Inorder(node<T> *temp);
    void Preorder(node<T> *temp);
    void Postorder(node<T> *temp);

    bool Search(node<T> *temp, int);

    int CountLeafNode(node<T> *temp);
    int CountParentNode(node<T> *temp);
};

template<class T>
BST<T> ::BST()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void BST<T> ::Inorder(node<T> *temp)
{
    if (temp != NULL)
    {
        Inorder(temp->lchild);
        cout << temp->data << " ";
        Inorder(temp->rchild);
    }
}

template<class T>
void BST<T> ::Preorder(node<T> *temp)
{
    if (temp != NULL)
    {
        cout << temp->data << " ";
        Preorder(temp->lchild);
        Preorder(temp->rchild);
    }
}

template<class T>
void BST<T> ::Postorder(node<T> *temp)
{
    if (temp != NULL)
    {
        Postorder(temp->lchild);
        Postorder(temp->rchild);
        cout << temp->data << " ";
    }
}

template<class T>
int BST<T> ::Count()
{
    return this->iCnt;
}

template<class T>
void BST<T> ::Insert(int iNo)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;
    newn = new node<T>(iNo);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while (1)
        {
            if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if (iNo > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (iNo == temp->data)
            {
                cout << "Node is already present\n";
                return;
            }
        }
    }

    this->iCnt++;
}

template<class T>
int BST<T> ::CountLeafNode(node<T> *temp)
{
    static int Cnt = 0;
    if (temp != NULL)
    {
        if (temp->lchild == NULL && temp->rchild == NULL)
        {
            Cnt++;
        }
        CountLeafNode(temp->lchild);
        CountLeafNode(temp->rchild);
    }
    return Cnt;
}

template<class T>
int BST<T> :: CountParentNode(node<T> *temp)
{
    static int i = 0;

    if (temp != NULL)
    {
        if (temp->lchild != NULL || temp->rchild != NULL)
        {
            i++;
        }
        CountParentNode(temp->lchild);
        CountParentNode(temp->rchild);
    }

    return i;
}

template<class T>
bool BST<T> ::Search(node<T> *temp, int iNo)
{
    bool bFlag = false;

    while (temp != NULL)
    {
        if (iNo == temp->data)
        {
            bFlag = true;
            break;
        }
        else if (iNo > temp->data)
        {
            temp = temp->rchild;
        }
        else if (iNo < temp->data)
        {
            temp = temp->lchild;
        }
    }

    return bFlag;
}

int main()
{
    BST<int> obj;

    int iRet = 0;
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
    cout << "Number of node are :" << iRet << endl;

    obj.Inorder(obj.first);

    cout << "\n";
    if (obj.Search(obj.first, 15))
    {
        cout << "Element is Found\n";
    }
    else
    {
        cout << "Element is not found\n";
    }

    iRet = obj.CountLeafNode(obj.first);
    cout << "Count of Leaf node are : " << iRet << endl;

    iRet = obj.CountParentNode(obj.first);
    cout << "Count of parent node are : " << iRet;
    return 0;
}
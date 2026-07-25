#include<iostream>
#include<queue>

using namespace std;

class node
{
    public :
    int data;
    node *lchild;
    node *rchild;

    node(int data)
    {
        this->data = data;
        this->rchild = NULL;
        this->lchild = NULL;
    }
};

class Tree
{
    public :
        node *first;
        int iCnt;

    Tree()
    {
        this->first = NULL;
        this->iCnt = 0;
    }

    void InsertNode(node *temp,node *newn)
    {
        if(newn->data > temp->data)
        {
            if(temp->rchild == NULL)
            {
                temp->rchild = newn;
                return;
            }
            InsertNode(temp->rchild,newn);
        }
        else if(newn->data < temp->data)
        {
            if(temp->lchild == NULL)   
            {
                temp->lchild = newn;
                return;
            }
            InsertNode(temp->lchild,newn);
        }
        else if(temp->data == newn->data)
        {
            cout<<"element is already present\n";
            return;
        }
    }

    void Insert(int Arr[],int iSize)
    {
        
        for(int i = 0 ; i < iSize ; i++)
        {
            node *newn = new node(Arr[i]);
            if(this->first == NULL) {
            this->first = newn;   // root assignment
        } else {
            InsertNode(this->first, newn);
        }
        }
    }

    void Inorder()
    {
        InorderHelper(this->first);
    }

    void InorderHelper(node *temp)
    {
        if(temp != NULL)
        {
            InorderHelper(temp->lchild);
            cout<<temp->data;
            InorderHelper(temp->rchild);
        }
    }

    void LevelOrder()
    {
        node *temp = this->first;
        queue<node *> obj1;
        vector<int> ans;

        obj1.push(temp);

        while(!obj1.empty())
        {
            queue<node *> obj2;
            while (!obj1.empty())
            {
                node *x = obj1.front();
                cout<<x->data<<"  ";
                if(x->lchild != NULL)
                {
                    obj2.push(x->lchild);
                }
                if(x->rchild != NULL)
                {
                    obj2.push(x->rchild);
                }
                obj1.pop();
                
            }

            cout<<"\n";

            while (!obj2.empty())
            {
                node *x = obj2.front();
                obj1.push(x);
                obj2.pop();
            }
                        
        }

    }

};

int main()
{
    int Arr[8] = {1,2,3,8,9,4,5,6};

    Tree obj;

    obj.Insert(Arr,8);
    obj.LevelOrder();

    obj.Inorder();
    return 0;
}
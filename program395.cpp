#include <iostream>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

public:
    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

class Tree
{
public:
    node *root;

public:
    Tree()
    {
        this->root = NULL;
    }

    void Insert(int data)
    {
        node *newn = NULL;
        node *temp = NULL;

        newn = new node(data);

        if (this->root == NULL)
        {
            this->root = newn;
        }
        else
        {
            temp = root;

            while (1)
            {
                if (data > temp->data)
                {
                    if (temp->right == NULL)
                    {
                        temp->right = newn;
                        break;
                    }

                    temp = temp->right;
                }
                else if (data < temp->data)
                {
                    if (temp->left == NULL)
                    {
                        temp->left = newn;
                        break;
                    }

                    temp = temp->left;
                }
                else if (data == temp->data)
                {
                    delete newn;
                    cout << "Node is already present" << endl;
                    return;
                }
            }
        }
    }

    void preOrder()
    {
        preOrderx(this->root);
        cout<<endl;
    }

    void preOrderx(node *temp)
    {
        if (temp != NULL)
        {
            cout << temp->data << " ";
            preOrderx(temp->left);
            preOrderx(temp->right);
        }
    }

    void postOrder()
    {
        postOrderx(this->root);
        cout<<endl;
    }

    void postOrderx(node *temp)
    {
        if (temp != NULL)
        {
            postOrderx(temp->left);
            postOrderx(temp->right);
            cout << temp->data;
        }
    }

    void inOrder()
    {
        inOrderx(this->root);
        cout<<endl;
    }

    void inOrderx(node *temp)
    {
        if (temp != NULL)
        {
            inOrderx(temp->left);
            cout << temp->data << " ";
            inOrderx(temp->right);
        }
    }

    bool search(int data)
    {
        node *temp = NULL;
        temp = root;
        bool flag = false;

        while (temp)
        {
            if (data == temp->data)
            {
                flag = true;
                break;
            }
            else if (data < temp->data)
            {
                temp = temp->left;
            }
            else if (data > temp->data)
            {
                temp = temp->right;
            }
        }

        return flag;
    }

    void preOrderNonRecursive()
    {
        stack<node *> *obj = new stack<node *>();
        node *temp = NULL;

        temp = this->root;

        while (1)
        {
            while (temp)
            {
                cout << temp->data << " ";

                obj->push(temp);

                temp = temp->left;
            }

            if (obj->empty())
            {
                break;
            }

            temp = obj->top();
            obj->pop();

            temp = temp->right;
        }

        cout << endl;
    }
};

int main()
{
    Tree root;

    root.Insert(51);
    root.Insert(21);
    root.Insert(61);
    root.Insert(11);
    root.Insert(31);
    root.Insert(71);

    root.preOrderNonRecursive();
    root.preOrder();
    return 0;
}
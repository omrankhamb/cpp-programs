#include<iostream>
#include<stack>
using namespace std;

class node
{
    public : 
        int data;
        node *right;
        node *left;

    node(int data)
    {
        this->data =data;
        this->right = NULL;
        this->left = NULL;
    }
};


class Tree
{
    public :
        node *root;

        Tree()
        {
            this->root = NULL;
        }


        void insert(int data)
        {
            node *newn = new node(data);
            if(this->root == NULL)
            {
                this->root = newn;
            }
            else
            {
                node *temp = this->root;

                while(true)
                {
                    if(newn->data < temp->data)
                    {
                        if(temp->left == NULL)
                        {
                            temp->left = newn;
                            break;
                        }
                        temp = temp->left;
                    }
                    else if(newn->data > temp->data)
                    {
                        if(temp->right == NULL)
                        {
                            temp->right = newn;
                            break;
                        }

                        temp = temp->right;
                    }
                    else if(temp->data == newn->data)
                    {
                        delete newn;
                        return;
                    }
                }
            }
        }

    void preOrder(node *temp)
    {
        if(temp == NULL)
        {
            return;
        }

        cout<<temp->data<<" ";
        preOrder(temp->left);   
        preOrder(temp->right);
    }

    void nonRecursivePreorder()
    {
        nonRecursivePreorderX(root);
    }

    void nonRecursivePreorderX(node *temp)
    {
        stack<node *> st;
        while(1)
        {
            while(temp)
            {
                st.push(temp);
                cout<<temp->data<<" ";
                temp = temp->left;
            }

            if(st.empty())
            {
                break;
            }

            temp = st.top();
            st.pop();
            temp = temp->right;
        }

    
        
    }
};

int main()
{

    Tree obj;

    obj.insert(15);
    obj.insert(7);
    obj.insert(18);


    obj.preOrder(obj.root);
    cout<<endl;
    obj.nonRecursivePreorder();
    return 0;
}
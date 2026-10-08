#include<iostream>
#include<queue>
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
                
                cout<<temp->data<<" ";
                st.push(temp);
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

    void nonRecursiveInorder()
    {
        nonRecursiveInorderX(this->root);
    }

    void nonRecursiveInorderX(node *temp)
    {
        stack<node *>st;

        while(1)
        {
            while(temp)
            {
                st.push(temp);
                temp = temp->left;
            }

            if(st.empty())
            {
                break;
            }

            temp = st.top();
            st.pop();
            cout<<temp->data<<" ";
            temp = temp->right;
        }
    }

    void nonRecursivePostorder()
    {
        nonRecursivePostorderX(this->root);
    }

    void nonRecursivePostorderX(node *temp) 
    {
        stack<node *> st;
        node *prev = NULL;

        do
        {
            while(temp)
            {
                st.push(temp);
                temp = temp->left;
            }

            while(temp == NULL && !st.empty())
            {
                temp = st.top();

                // root->right = prev  then the element prev is printed
                if(temp->right == NULL || temp->right == prev)
                {   
                    st.pop();
                    cout<<temp->data<<" ";
                    prev = temp;
                    temp= NULL;
                }
                else
                {
                    temp = temp->right;
                }
            }
        } while (!st.empty());
        
    }


    // LevelOrder Traversal
    void leveLorder()
    {
        queue<node *> q;
        node *temp = NULL;

        if(this->root == NULL)
        {
            return  ;
        }

        q.push(root);

        while(!q.empty())
        {
            temp = q.front();
            cout<<temp->data<<" ";

            if(temp->left != NULL)
            {
                q.push(temp->left);
            }

            if(temp->right != NULL)
            {
                q.push(temp->right);
            }

            q.pop();
        }
    }


};

int main()
{

    Tree obj;

    obj.insert(11);
    obj.insert(5);
    obj.insert(17);
    obj.insert(4);
    obj.insert(9);
    obj.insert(14);
    obj.insert(21);

    cout<<endl;
    obj.leveLorder();

    return 0;
}
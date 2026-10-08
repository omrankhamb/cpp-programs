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



    // Q1 Find the maximum element in the binary Tree

    /////////////////////////////////////////////////////////////////////////////////////
    //
    //  find the left max and right submax compare with the current parent node 
    //  continue with evey when return comes according the child and parent 
    //  the maximum value chaec aand return 
    //
    /////////////////////////////////////////////////////////////////////////////////////
    
    int findMax(node *temp) 
    {
       if(temp != NULL)
       {
        int leftmax = findMax(temp->left);
        int rightmax = findMax(temp->right);

        return max(max(leftmax , rightmax) , temp->data);
       }

       return 0;

    }



    /////////////////////////////////////////////////////////////////////////////////////
    //
    //  Seach In the tree with recursion Just find if the daata present then return true 
    //  Chech everyTime with the OR gate with remaining conditon at leat one true create
    //  answetr true eliterhreturn false

    //  LevelOreder Traversal :
    //              WE can also solve these question using levelorder Traversal compare step 
    //              by step and at the end return the maximum element
    /////////////////////////////////////////////////////////////////////////////////////
    bool search(int data)
    {
        node * temp = this->root;
        if(this->root == NULL)
        {
            cout<<"Tree is Empty"<<endl;
        }
        else
        {

            while(temp)
            {
                if(temp->data == data)
                {
                    return true;
                }
                else if(data < temp->data)
                {
                    temp = temp->left;
                }
                else if(data > temp->data)
                {
                    temp = temp->right;
                }
            }

        }

        return false;
    }


    bool searchWithRec(int data)
    {
        return traversal(this->root , data);
    }

    bool traversal(node *temp , int data)
    {
        if(temp  != NULL)
        {

            return traversal(temp->left, data) || traversal(temp->right , data) || temp->data == data;
        }

        return false;
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

    

    return 0;
}
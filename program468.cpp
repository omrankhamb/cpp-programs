#include <iostream>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

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
    vector<vector<int>> allPaths;

    Tree()
    {
        this->root = NULL;
    }

    void insert(int data)
    {
        node *newn = new node(data);
        if (this->root == NULL)
        {
            this->root = newn;
        }
        else
        {
            node *temp = this->root;

            while (true)
            {
                if (newn->data < temp->data)
                {
                    if (temp->left == NULL)
                    {
                        temp->left = newn;
                        break;
                    }
                    temp = temp->left;
                }
                else if (newn->data > temp->data)
                {
                    if (temp->right == NULL)
                    {
                        temp->right = newn;
                        break;
                    }

                    temp = temp->right;
                }
                else if (temp->data == newn->data)
                {
                    delete newn;
                    return;
                }
            }
        }
    }

    void preOrder(node *temp)
    {
        if (temp == NULL)
        {
            return;
        }

        cout << temp->data << " ";
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
        while (1)
        {
            while (temp)
            {

                cout << temp->data << " ";
                st.push(temp);
                temp = temp->left;
            }

            if (st.empty())
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
        stack<node *> st;

        while (1)
        {
            while (temp)
            {
                st.push(temp);
                temp = temp->left;
            }

            if (st.empty())
            {
                break;
            }

            temp = st.top();
            st.pop();
            cout << temp->data << " ";
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
            while (temp)
            {
                st.push(temp);
                temp = temp->left;
            }

            while (temp == NULL && !st.empty())
            {
                temp = st.top();

                // root->right = prev  then the element prev is printed
                if (temp->right == NULL || temp->right == prev)
                {
                    st.pop();
                    cout << temp->data << " ";
                    prev = temp;
                    temp = NULL;
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

        if (this->root == NULL)
        {
            return;
        }

        q.push(root);

        while (!q.empty())
        {
            temp = q.front();
            cout << temp->data << " ";

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
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
        if (temp != NULL)
        {
            int leftmax = findMax(temp->left);
            int rightmax = findMax(temp->right);

            return max(max(leftmax, rightmax), temp->data);
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
        node *temp = this->root;
        if (this->root == NULL)
        {
            cout << "Tree is Empty" << endl;
        }
        else
        {

            while (temp)
            {
                if (temp->data == data)
                {
                    return true;
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
        }

        return false;
    }

    bool searchWithRec(int data)
    {
        return traversal(this->root, data);
    }

    bool traversal(node *temp, int data)
    {
        if (temp != NULL)
        {

            return traversal(temp->left, data) || traversal(temp->right, data) || temp->data == data;
        }

        return false;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Question : Print the level Order data in the reverse Order
    //  Ans :   We can solve the question using the answer is
    //          by using the Queue and stack
    //          what we do In levelOrder we push the data in the queue one by one
    //          In the same time we push the right data first and then the left data
    //          Similarly push at the end of the stack one by one

    //          When we start the data get one by one then print from the stack by onr
    //
    ////////////////////////////////////////////////////////////////////////////////////////

    void reveseLevelOrder()
    {
        queue<node *> q;
        stack<node *> st;
        q.push(this->root);

        while (!q.empty())
        {
            node *temp = q.front();
            q.pop();

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            st.push(temp);
        }

        while (!st.empty())
        {
            node *obj = st.top();
            cout << obj->data << " ";
            st.pop();
        }
    }

    //////////////////////////////////////////////////////
    //
    //  Qustion : Find the full nodes without the recursion
    //  Solution : Using levelOrder traversal chaeck the
    //              Left is not and right is not null
    //////////////////////////////////////////////////////

public:
    void fullNode()
    {
        queue<node *> st;
        node *temp;

        st.push(this->root);

        while (!st.empty())
        {
            temp = st.front();
            st.pop();
            if (temp->left && temp->right)
            {
                cout<<temp->data<<" ";
            }

            if (temp->left != NULL)
            {
                st.push(temp->left);
            }

            if (temp->right != NULL)
            {
                st.push(temp->right);
            }
        }
    }

    ////////////////////////////////////////////////////////////////////////
    //
    //  Qustion : Find the maximu sum according to the levelOrder
    //  Solution : Usinng LevelOrder and some change we can caluclate the answer
    //             After every level We can insert the null Pointer to find out 
    //             The MaximumSum in a tree 
    //
    ////////////////////////////////////////////////////////////////////////

    int maximumSum()
    {
        int calculateSum = 0;
        int maxSum = 0;

        queue<node *> obj;
        obj.push(this->root);
        obj.push(NULL);

        while(!obj.empty())
        {
            node *temp = obj.front();
            obj.pop();

            if(temp == NULL)
            {
                if(maxSum < calculateSum)
                {
                    maxSum = calculateSum;
                }

                calculateSum = 0;
                if(!obj.empty())
                {
                    obj.push(NULL);
                }
            }
            else
            {
                calculateSum += temp->data;
                if(temp->left != NULL)
                {
                    obj.push(temp->left);
                }
                
                if(temp->right != NULL)
                {
                    obj.push(temp->right);
                }
            } 


        }

        return maxSum;
    }

    public : 
    //////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Qustion  : Print All the path of the binary tree
    //  Solution : We can print using the recursion we print all path of tree
    //             before left call push the element 
    //             After right call pop the element
    //             Insert in the actaul vector of path if arr->left == NULL && arr->right == NULL  
    //             The curren element data is not inserting so at taht time ones insert and ont pop
    //             should be exectued or should be done                  
    //////////////////////////////////////////////////////////////////////////////////////////////
        void path(node * temp , vector<int> &arr)
        {
            if(temp == NULL)
            {

               
                return;
            }

            if(temp->left == NULL && temp->right== NULL)
            {
                arr.push_back(temp->data);
                allPaths.push_back(arr);
                arr.pop_back();
            }

            arr.push_back(temp->data);
            path(temp->left , arr);   
            path(temp->right , arr);
            arr.pop_back();
        }


        void printAllPath()
        {

            int n = allPaths.size();

            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < allPaths[i].size() ; j++)
                {
                    cout<<allPaths[i][j]<<" ";
                }
                cout<<endl;
            }

        }


    ////////////////////////////////////////////////////////////////////////
    //
    //  Qustion  : Sum all Elments in the binary tree
    //  Solution : 1]  We can calculate using the recusrion 
    //             2] We can solve the same problem using the levelOrer Traversal
    //             
    ////////////////////////////////////////////////////////////////////////

    int toalSumTree(node * temp)
    {
        if(temp == NULL)
        {
            return 0;
        }

        return  temp->data + toalSumTree(temp->left) + toalSumTree(temp->right);
    }

    int toalSumTreeNonRecursive()
    {
        queue<node*> obj;
        int sum = 0;

        obj.push(this->root);

        while(!obj.empty())
        {
            node *temp = obj.front();
            sum += temp->data;

            if(temp->left != NULL)
            {
                obj.push(temp->left);
            }

            if(temp->right != NULL)
            {
                obj.push(temp->right);
            }

            obj.pop();
        }

        return sum;
    }

    ////////////////////////////////////////////////////////////////////////
    //
    //  Qustion  : Convertin the mirror Image
    //  Solution : At the recusrion just change the child node with parent node
    //
    //             
    ////////////////////////////////////////////////////////////////////////

    void levelByLevel() {
    if (!this->root) return;

    queue<node*> q;
    q.push(this->root);

    while (!q.empty()) {
        int size = q.size();  // number of nodes at this level
        for (int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << "\n";  // end of level
    }
}

    void mirrorImage(node *temp)  
    {
        if(temp == NULL)
        {
            return ;
        }
        node *obj = temp->left;
        temp->left = temp->right;
        temp->right = obj;

        mirrorImage(temp->left);
        mirrorImage(temp->right);

    }

    ////////////////////////////////////////////////////////////////////////
    //
    //  Qustion  : Find the list common Ancestor
    //  Solution : 1] if both is at either left or either riht of tree
    //                  if Either left go deepr and vice versa for right
    //             2] check 
    ////////////////////////////////////////////////////////////////////////


    node * LCA(node *temp , node * p , node * q)
    {
        node *left = NULL ,*right = NULL;
        if(temp == NULL)
        {
            return NULL;
        }

        // if One of themm is find then return
        if(temp == p || temp == q)
        {
            return temp;
        }

        left = LCA(temp->left , p , q);
        right = LCA(temp->right , p , q);

        //
        if(left && right)
        {
            return root;
        }
        else
        {
            return left ? left : right;
        }

    }


/////////////////////////////////////////////////////////////////////////////////////
/*

    Question : Build the tree from Inorder , Preorder and PostOrder Treaversl
    Build the tree from Inorder and from Preorder

*/
/////////////////////////////////////////////////////////////////////////////////////

    public :    

    int searchInorder(vector<int> Inorder , int inorderStart , int inorderEnd , int data)
    {
        for(int i= inorderStart ;  i <= inorderEnd ; i++)
        {
            if(Inorder[i] == data)
            {
                return  i;
            }
        }
        return -1;

    }

    node *BuildTree(vector<int> Inorder , vector<int> Preorder , int inorderStart , int inorderEnd)
    {
        static int preOrderidx = 0;
        node *newn = NULL;
        if(inorderStart > inorderEnd)
        {
            return NULL;
        }


        newn = new node(Preorder[preOrderidx]);
        preOrderidx++;

        if(inorderStart == inorderEnd)
        {
            return newn;
        }

        int inorderIdx = searchInorder(Inorder  , inorderStart , inorderEnd , newn->data);

        newn->left = BuildTree(Inorder , Preorder , inorderStart , inorderIdx - 1);
        newn->right = BuildTree(Inorder , Preorder , inorderIdx + 1 , inorderEnd);

                        
        return newn;
    }

    public : 
        static void display(node *temp) 
        {
            if(temp == NULL)
            {
                return;
            }

            cout<<temp->data<<" ";
            Tree :: display(temp->left);
            Tree :: display(temp->right);
        }

};

int main()
{

    Tree obj;

    obj.insert(8);
    obj.insert(5);
    obj.insert(12);
    obj.insert(2);
    obj.insert(7);
    obj.insert(10);
    obj.insert(13);
    obj.insert(14);
    obj.insert(11);

    
    
    obj.levelByLevel();
    obj.mirrorImage(obj.root);
    obj.levelByLevel();

    vector<int> Inorder  = {40, 20, 50, 10, 30};
    vector<int> Preorder = {10, 20, 40, 50, 30};

    node *root = NULL;

    root = obj.BuildTree(Inorder , Preorder , 0 , Inorder.size()-1);

    Tree :: display(root);

   

    return 0;
}


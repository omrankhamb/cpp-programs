#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void MaxHeap(TreeNode **first, vector<int> nums)
{
    int idx = 0;
    int n = nums.size();
    if ((*first) == NULL)
    {
        (*first )= new TreeNode(nums[idx++]);
    }

    TreeNode *temp = (*first);
    queue<TreeNode *> q1;
    q1.push(temp);
    temp = NULL;

    while (!q1.empty())
    {
        temp = q1.front();
        q1.pop();

        if (idx < n && temp->left == NULL)
        {
            TreeNode *newn = new TreeNode(nums[idx++]);
            temp->left = newn;
            q1.push(newn);
        }

        if (idx < n && temp->right == NULL)
        {
            TreeNode *newn = new TreeNode(nums[idx++]);
            temp->right = newn;
            q1.push(newn);
        }
    }
}

void PreOrder(TreeNode * temp)
{
    if(temp == NULL)
    {
        return;
    }
    PreOrder(temp->left);
    cout<<temp->data<<" ";
    PreOrder(temp->right);

}

void LevelOrder(TreeNode *temp)
{
    queue<TreeNode *> q1;

    q1.push(temp);

    while (!q1.empty())
    {
        queue<TreeNode * > q2;
        while (!q1.empty())
        {
            TreeNode *temp = q1.front();
            cout<<temp->data<<" ";
            q1.pop();

            if(temp->left != NULL)
            {
                q2.push(temp->left);

            }

            if(temp->right != NULL)
            {
                q2.push(temp->right);
            }
        }

        cout<<endl;

        while (!q2.empty())
        {
            TreeNode * curr = q2.front();
            q2.pop();
            q1.push(curr);
        }
        
        
    }
    

}



int main()
{

    TreeNode *head = NULL;
    vector<int> nums = {40, 32, 20, 18, 31, 12, 19, 15, 17, 13};

    MaxHeap(&head, nums);

    LevelOrder(head);

    return 0;
}
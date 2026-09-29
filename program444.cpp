#include<iostream>
#include<string>
using namespace std;

void printPath(TreeNode *root ,string ans)
{
    if(root == NULL)
    {
        return ;
    }

    if(root->left == NULL && root->right == NULL)
    {
        cout<<ans<<endl;
        return;
    }

    printPath(root->left , ans);
    printPath(root->right , ans);

}

int main()
{

    return 0;
}
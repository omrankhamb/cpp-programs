#include<iostream>
#include<vector>
#include<set>
using namespace std;


int main()
{

    vector<int> nums = {1,2,1};

    int n = nums.size();

    set<int> st;

    for(int i = 0 ; i < n ; i++)
    {

        if(st.find(nums[i]) != st.end())
        {
            cout<<"element is present in set before: "<<nums[i]<<endl;
        }
        else
        {
            st.insert(nums[i]);
            cout<<"element is not present in set before: "<<nums[i]<<endl;
        }

    }

    cout<<endl<<"Elements in set "<<endl;

    for(int  i : st)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
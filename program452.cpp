#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;


int main()
{
    vector<int> ans;

    ans.push_back(1);

    if(find(ans.begin() , ans.end() , 1))
    {
        cout<<"element is present";
    }
    return 0;
}
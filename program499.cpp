#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>bfsToGraph(int v , vector<int> adj[])
{
    // v is to represent the vertices
    queue<int> q;
    q.push(0);

    vector<bool> visited(v , 0);
    vector<int> ans;
    int node;

    while(!q.empty())
    {
        node  = q.front();
        q.pop();
        ans.push_back(node);

        for(int j = 0 ; j < adj[node].size() ; j++)
        {
            if(!visited[adj[node][j]])
            {
                visited[adj[node][j]] = 1;
                q.push(node);
            }

        }
    }

    return ans;
}
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *
 *  Graph Data structure
 *  It contain unidirected graph
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int vertex, edge;

    cin >> vertex >> edge;

    vector<int> adjList[vertex];

    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *
 *  Graph Data structure
 *  Depth First search
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DFS(int node, vector<int> adjList[], vector<int> &visited, vector<int> &ans)
{
    visited[node] = 1;
    ans.push_back(node);

    for (int i = 0; i < adjList[node].size(); i++)
    {
        // If node not visted then go to the node
        if (!visited[adjList[node][i]])
        {
            DFS(adjList[node][i], adjList, visited, ans);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *
 *  Graph Data structure
 *  Breadth First search
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void BFS(int node, vector<int> adjList[], vector<int> &visited, vector<int> &ans)
{

    // whatever the node is passed from the main it will start from the breadth firstsearch
    queue<int> q;
    visited[node] = 1;
    ans.push_back(node);
    q.push(node);

    while (!q.empty())
    {
        node = q.front();
        ans.push_back(node);
        q.pop();

        for (int i = 0; i < adjList[node].size(); i++)
        {
            if (!visited[adjList[node][i]])
            {
                visited[adjList[node][i]] = 1;
                q.push(adjList[node][i]);
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Graph Data structure
 *  Breadth First search
 *  BFS using detect the graph in cycle
 *
 *  1] if the parent node then ignore
 *  2] if the visited node are vising again then answer is got return
 *  3] if the node is node is not visted then node the visit then contine
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool BFScycleIsPresent(int node, vector<int> adjList[], vector<bool> &visited)
{
    queue<pair<int, int>> q;

    visited[node] = 1;

    q.push(make_pair(node, -1));
    // intinally the parent is one

    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int i = 0; i < adjList[node].size(); i++)
        {
            // First condition if parent then continue

            if (adjList[node][i] == parent)
            {
                continue;
            }

            if (visited[adjList[node][i]])
            {
                return true;
            }

            visited[adjList[node][i]] = 1;
            q.push(make_pair(adjList[node][i], node));
        }
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Graph Data structure
 *  Depth First search
 *  Depth using detect the graph in cycle
 *
 *  1] if the parent node then ignore
 *  2] if the visited node are vising again then answer is got return
 *  3] if the node is node is not visted then node the visit then contine
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool DFSdetectCycle(int node, int parent, vector<int> adjList[], vector<bool> &visited)
{
    visited[node] = 1;

    for (int i = 0; i < adjList[node].size(); i++)
    {
        if (adjList[node][i] == parent)
        {
            continue;
        }

        if (visited[adjList[node][i]])
        {
            return 1;
        }

        if (DFSdetectCycle(adjList[node][i], node, adjList, visited))
        {
            return true;
        }
    }

    return false;
}
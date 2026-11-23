#include <iostream>
#include <queue>
#include <vector>
#include <bits/c++config.h>
using namespace std;

/**
 *
 * Dijaktra Algoritham
 */

vector<int> dijaktra(int v, vector<vector<int>> adj[], int S)
{
    vector<int> explored(v, 0);
    vector<int> dist(v, INT_FAST8_MAX);

    dist[S] = 0;

    int count = v;

    while (count--)
    {
        // select a node which is not explored yet and the distance value is minimum
        // Alaways find the minimum value from dist index is considered accorind to the value
        int node = -1, value = INT16_MAX;
        for (int i = 0; i < v; i++)
        {
            if (!explored[i] && value > dist[i])
            {
                node = i;
                value = dist[i];
            }
        }

        explored[node] = 1;
        // relax the edge
        // if not explored or the distance should be become minimum from previos one then update the distance also
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0]; // node to other edge
            int weight = adj[node][j][1];    // wt between the edge

            if (!explored[neighbour] && (dist[node] + weight < dist[neighbour]))
            {
                dist[neighbour] = dist[node] + weight;
            }
        }
    }

    return dist;
}

/**
 *
 * Dijaktra Algoritham
 * using the piority queue
 *
 *  creaate the visted and the dist
 * initialise the neighbour as the max
 * if we got the less distance then update the distance
 *
 *
 *  step : First push the node of the first as { 0 (dist) , S};
 *          pop from the heap then mark as explored
 *          find the neighbour element and then push the updated weight and the node value in the queue
 *          continue the precoess until the queue is empty

 */

vector<int> dijaktra(int v, vector<vector<int>> adj[], int S)
{
    vector<int> explored(v, 0);
    vector<int> dist(v, INT_FAST8_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, S});
    // pushing the wight and the size

    while (!pq.empty())
    {
        int node = pq.top().second;
        pq.pop();

        // if the distance is fixed further change in distance is not possible minimum distance for node is found
        // Exploare distance
        if (explored[node] == 1)
        {
            continue;
        }

        explored[node] = 1;
        // relax the edge

        // travel through the node list
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0]; // node to other edge
            int weight = adj[node][j][1];    // wt between the edge

            // if not explored or the distance should be become minimum from previos one then update the distance also
            if (!explored[neighbour] && (dist[node] + weight < dist[neighbour]))
            {
                // update the distance
                // finding the neighbour elment
                dist[neighbour] = dist[node] + weight;
                pq.push({dist[neighbour], neighbour});
            }
        }
    }

    return dist;
}

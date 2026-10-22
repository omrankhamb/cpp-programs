#include <iostream>
using namespace std;

class node
{
public:
    int v;
    int edge;
    int **arr;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Graph : Graph representation using the Adjancey Matrix (Edges and node value is fixed)
    Solution : first we create the double pointer and and create double array of the pointer and then store the value of the array
               For each indexwe create the array of same size and initialise with the value = 0
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Graph
{
public:
    node *first;

public:
    Graph(int v, int edge)
    {
        first = new node();
        first->v = v;
        first->edge = edge;

        (first->arr) = new int *[v];

        for (int i = 0; i < v; i++)
        {
            first->arr[i] = new int[v];
            for (int j = 0; j < v; j++)
            {
                first->arr[i][j] = 0;
            }
        }
    }

    void insert()
    {
        int ce = 0;

        while (ce != first->edge)
        {
            int x = 0, y = 0;
            printf("Enter the edges between node : ");
            scanf("%d %d", &x, &y);

            first->arr[x][y] = 1;
            first->arr[y][x] = 1;
            ce++;
        }
    }

    void display()
    {

        cout << "  ";
        for (int i = 0; i < first->v; i++)
        {
            cout << i << " ";
        }

        cout << endl;

        for (int i = 0; i < first->v; i++)
        {
            cout << i << " ";
            for (int j = 0; j < first->v; j++)
            {
                cout << first->arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Graph :    Graph Representation using the Adjancey list
    Solution : first we create the double pointer and and create double array of the pointer and then store the value of the array
               For each indexwe create the array of same size and initialise with the value = 0
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    Graph *obj = new Graph(4, 4);
    obj->insert();
    obj->display();

    return 0;
}
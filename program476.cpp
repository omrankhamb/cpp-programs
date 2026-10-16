#include <iostream>
using namespace std;

/*
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
/*
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
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Graph :    Graph Representation using the Adjancey list
    Solution : first we create the double pointer and and create double array of the pointer and then store the value of the array
               For each indexwe create the array of same size and initialise with the value = 0
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class node
{
public:
    int data;
    node *next;

public:
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Graph
{
public:
    int n;
    int e;
    node **arr;

public:
    Graph(int n, int e)
    {
        this->n = n;
        this->e = e;
        arr = new node *[n];

        // creating the node structure of adjancey list and at inital set the value to NULL
        for (int i = 0; i < n; i++)
        {
            arr[i] = NULL;
        }
    }

    void createGraph()
    {
        int ce = 0;

        while (ce != this->e)
        {
            int x = 0, y = 0;
            printf("enter the edge between two valuse : ");
            scanf("%d %d", &x, &y);

            for (int i = 0; i < this->n; i++)
            {
                if (i == x)
                {
                    node *newn = new node(y);
                    if (arr[x] == NULL)
                    {
                        arr[x] = newn;
                    }
                    else
                    {
                        node *temp = NULL;
                        temp = arr[x];

                        while (temp->next != NULL)
                        {
                            temp = temp->next;
                        }

                        temp->next = newn;
                        break;
                    }
                }
            }

            for (int i = 0; i < this->n; i++)
            {
                if (i == y)
                {
                    node *newn = new node(x);
                    if (arr[y] == NULL)
                    {
                        arr[y] = newn;
                    }
                    else
                    {
                        node *temp = NULL;
                        temp = arr[y];

                        while (temp->next != NULL)
                        {
                            temp = temp->next;
                        }

                        temp->next = newn;
                        break;
                    }
                }
            }

            ce++;
        }
    }

    void displayGraph()
    {
        for (int i = 0; i < this->n; i++)
        {
            node *temp = arr[i];
            cout << i << " [";
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }

            cout << " ]" << endl;
        }
    }
};

int main()
{
    Graph *newn = new Graph(4, 4);
    newn->createGraph();
    newn->displayGraph();
    return 0;
}
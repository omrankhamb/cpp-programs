#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Heap Sort
// First Buile the Maxheap

int main()
{

    priority_queue<int> p;
    // Min Heap Priority syntax priority_queue<int , vector<int> , greater<int> > queue;

    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);

    p.push(15);



    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
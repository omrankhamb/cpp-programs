#include<iostream>
#include<set>
#include<queue>
using namespace std;

int main()
{

    priority_queue<int , set<int> , greater<int>>p;

    p.push(2);
    p.push(2);

    cout<<p.size()<<endl;
    return 0;
}
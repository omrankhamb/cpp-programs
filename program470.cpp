#include<iostream>
#include<map>
using namespace std;
int main()
{

    map<int , int> mymap;

    mymap[-1] = 2;
    mymap[-2] = 3;
    mymap[1] = 4;

    for(auto &x : mymap)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
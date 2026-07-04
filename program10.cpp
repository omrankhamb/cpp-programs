#include<iostream>
#include<vector>
using namespace std;
// Array in c++

int main()
{
    vector<int> Arr;
    Arr.push_back(10);

    for(int X : Arr)
    {
        cout<<X;
    }
    
    return 0;
}
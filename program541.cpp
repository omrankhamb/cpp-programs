#include <iostream>
#include <queue>
#include <vector>
#include <bits/c++config.h>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40};
    int idx;
    cout << "Enter the index : " << endl;
    cin >> idx;
    try
    {
        if (idx < 0 || idx > 3)
        {
            throw "Array index out of bound the exception";
        }
    }
    catch (const char *msg)
    {
        std::cerr << msg << '\n';
    }

    cout<<"the program endend successfully"<<endl;

    return 0;
}
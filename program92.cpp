#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x = 11;
    int y = 0;
    int j = 0;

    try
    {
        if(y == 0)
        {
            throw runtime_error("Division by zero error");
        }
       j = x/ y;
       
    }
    catch(const char *msg)
    {
        cout<<"Exception is : "<<msg<<"\n";
    }
    

    return 0;
}

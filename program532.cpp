#include <iostream>
using namespace std;
class Time
{
    int h, m;

public:
    Time(int a, int b)
    {
        h = a;
        m = b;
    }
    operator int()
    {
        cout << "\nClass Type to Basic Type Conversion...";
        return (h * 60 + m);
    }
    ~Time()
    {
        cout << "\nDestructor called..." << endl;
    }
};
int main()
{
    int h, m, duration;
    cout << "\nEnter Hours ";
    cin >> h;
    cout << "\nEnter Minutes ";
    cin >> m;
    Time t(h, m);
    duration = t;
    cout << "\nTotal Minutes are " << duration;
    cout << "\n2nd method operator overloading ";
    duration = t.operator int();
    cout << "\nTotal Minutes are " << duration;
    return 0;
}
// Program – Using Constructor
#include <iostream>
using namespace std;
class Time
{
    int hrs, min;

public:
    Time(int h, int m)
    {
        hrs = h;
        min = m;
    }
    Time()
    {
        cout << "\n Time's Object Created";
    }
    int getMinutes()
    {
        int tot_min = (hrs * 60) + min;
        return tot_min;
    }
    void display()
    {
        cout << "Hours: " << hrs << "\n";
        cout << " Minutes : " << min << "\n";
    }
};

class Minute
{
    int min;

public:
    Minute()
    {
        min = 0;
    }
    void operator=(Time T)
    {
        min = T.getMinutes();
    }
    void display()
    {
        cout << "\n Total Minutes : " << min << "\n";
    }
};
int main()
{
    Time t1(1, 20);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1;
    t1.display();
    m1.display();
    return 0;
}
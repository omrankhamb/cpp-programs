#include <iostream>
using namespace std;

class Student
{
public:
    int *p;

    Student(int x)
    {
        p = new int;
        // Internally treated as  a array
        //
        p[0] = x;
    }

    void Display()
    {
        cout << *(p + 0);
    }
};

int main()
{

    int y = 10;

    Student s1(y);

    cout<<s1.p[0];
    s1.Display();

    return 0;
}
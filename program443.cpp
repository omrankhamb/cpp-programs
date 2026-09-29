#include <iostream>
using namespace std;

class Student
{
public:
    int iNo;
    Student()
    {
        cout << "object is created\n";
    }
};

int main()
{
    int i = 11;

    void *ptr = NULL;

    ptr = &i;

    printf("%d\n", *(int *)ptr);

    Student obj;
    obj.iNo = 10;
    void *pobj = &obj;

    printf("%d ", ((Student *)pobj)->iNo);
}
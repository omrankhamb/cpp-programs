#include<iostream>
using namespace std;


class Student
{

    public :
        static int i;

        int x;
        Student()
        {
            i++;
        }
};

int Student :: i = 0;
int main()
{

    Student **obj = new Student*[10];

    for(int Cnt = 0 ; Cnt < 10 ; Cnt++)
    {
        *((obj) + Cnt) = new Student();
        (*(*(obj + Cnt))).x = Cnt;

        printf("%d " , (*(*(obj + Cnt))).x);

    }



    return 0;
}
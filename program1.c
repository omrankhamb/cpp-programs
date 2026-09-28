#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int i;
    int j;
};

typedef struct Student Student;

int main()
{
    Student *obj = (Student *)malloc(sizeof(Student) * 10);
   

    for(int x = 0 ; x < 10 ; x++)
    {
        obj[x].i = x;
        obj[x].j = x;
    }

    for(int x = 0 ; x < 10 ; x++)
    {
        printf("%d\n" , (*(obj+x)).i);
        printf("%d\n" , obj[x].j);
    }

    Student **ppobj = &obj;

    printf("%d\n",*ppobj);
    printf("%d\n",obj);

    printf("%d\n",**ppobj);
    printf("%d\n",*obj);


    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d " , ppobj[0]->i);    // (*(*(ppobj) + x)).i
        printf("%d\n" , (*(*(ppobj) + i)).j);
    }
    

    return 0;
}
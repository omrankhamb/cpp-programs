#include<stdio.h>
#include<stdlib.h>

struct student{
    int Rno;
    int Class;
};

typedef struct student student;

struct name
{
    int Name;
    int year;
};

typedef struct name name;

int main()
{

    name obj;

    printf("%d\n",obj.Name);
    printf("%d\n",obj);

    // cutting the cacke accoring the passed datatype
    name *dobj = (name *)malloc(sizeof(student));

    dobj->Name = 24;
    dobj->year = 26;

    printf("%d\n",dobj->Name);
    printf("%d\n",dobj->year);
    return 0;
}
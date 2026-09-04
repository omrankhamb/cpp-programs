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

    void * obj = malloc(sizeof(student));

    // telling the compiler how much you should fetch the data 
    // of student object
    (*(student*)obj).Rno = 21;
    printf("%d",(*(student*)obj).Rno);

    return 0;
}
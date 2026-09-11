#include<stdio.h>

enum book{
    Team_lead,
    Student,
    Hr
};

int main()
{

    char arr[10] = {'\0'};
    int i = 0;

    write(2,"Enter the data",14);   // write the data in wcreen

    i = read(0,arr,8);  // return the data written successfully
    printf("%s" , arr);     
    printf("Data written successfully : %d "  , i);

    return 0;
}
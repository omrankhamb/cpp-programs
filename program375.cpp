#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

using namespace std;



int main()
{
    int fd = creat("New.txt",0777);

    if(fd == -1)
    {
        cout<<"File not created\n";
    }
    else
    {
        cout<<"file is creates successfully\n";
    }
    return 0;
}
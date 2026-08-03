#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

# define BUFFER_SIZE 1024


void ReadingFile(char *Name)
{
    int fd = 0,iRet = 0;
    char Buffer[BUFFER_SIZE];

    fd = open(Name,O_RDWR);

    if(fd == -1)
    {
        cout<<"File not opened successfully\n";
        return;
    }
    else
    {
        while( (iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            cout<<Buffer;
            memset(Buffer,'\0',iRet);
        }
    }
}

int main()
{
    char FileName[30] = {'\0'};
    cout<<"Enter File Name : \n";

    cin>>FileName;

    ReadingFile(FileName);  

    
    return 0;
}
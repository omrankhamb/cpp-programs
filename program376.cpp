#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int fd = open("New.txt", O_RDWR);
    int iRet = 0;
    char arr[30] = {'\0'};

    if (fd == -1)
    {
        cout << "file is not opened" << endl;
    }
    else
    {
        cout << "File is opened for read and erite mode\n";
        cout << "Enter data to read in file\n";

        
        iRet = read(0,arr,sizeof(arr));

        write(fd, arr, iRet);
    }
    return 0;
}
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

using namespace std;
#define Buffer_size 1024

///////////////////////////////////////////////////////////////////////////
//
//  printf()    -> return the number of charater get printed successfully on console
//  scanf()     -> return number of tokend get successfully scan from console
//  if 0        -> std input
//  if 1        -> stdoutput
//  if 2        -> standard error
//  sscanf      -> transfer the data from big chamber to samll bucket
//  fflush()    ->
//  memeset()   -> To filter the the data from the box
//  read()      -> argumnet of rad are read(fd, Buffer , how many byte to read)
//              -> return type of read is it return the number of bytes get succesfully fetched
//   Write      -> argument of write are file descriptor , data, size of data
//              -> return type ofa data is
//  open        -> file name and mode of open the file
//  creat       -> name of the file and gie its privilage for user
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int fd = 0;
    char FileName[30] = {'\0'};
    char str[Buffer_size] = {'\0'};

    cout << "Enter File Name : ";
    scanf("%[^'\n']s", FileName);

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        cout << "File is not opened" << endl;
    }
    else
    {
        cout << "Enter the data to print in string :" << endl;
        int x = read(0, str, sizeof(str));

        write(fd, str, x);
    }
}
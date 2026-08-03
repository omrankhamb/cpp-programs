#include<iostream>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

void FileInfo(char *str)
{
    struct stat sobj;
    stat(str,&sobj);

    cout<<sobj.st_size<<endl;
    cout<<sobj.st_mode<<endl;
    cout<<sobj.st_ctime<<endl;
    cout<<sobj.st_atime<<endl;
    cout<<sobj.st_uid;
}

int main()
{

    char str[20] = {'\0'};
    cout<<"Enter File Name : \n";
    cin>>str;

    FileInfo(str);
    return 0;
}
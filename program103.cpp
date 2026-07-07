#include<iostream>

namespace Input_string
{
    void IO_string(char *arr)
    {
        scanf(" %[^'\n']s",arr);
    }
    
}

using namespace std;
using namespace Input_string;

int StrLenX(const char *Str)
{
    int iCnt = 0;

    int i = 0;
    while (Str[i] != '\0')
    {
        i++;
        iCnt++;
    }

    return iCnt;
    
}


void StrCpyX(char *str,char *str2) // StrCpyX(char *Source,char *Dest)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0'; 
    
}



int main()
{
    int iRet = 0;
    char Arr[20];
    char Brr[20];
    char *help = NULL;

    cout<<"Enter String  : \n";
    IO_string(Arr);

    cout<<"Enter 2nd String : \n";
    IO_string(Brr);

    

    return 0;
}
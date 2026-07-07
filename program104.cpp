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

char *StrCatX(char *str,char *str2)  //StrCatX(char *str1,char *str2)
{
    int i = 0;
    int j = 0;
    int iLength1 = StrLenX(str);
    int iLength2 = StrLenX(str2);
    char *strcat = (char*)malloc(sizeof(char)*iLength1*iLength2);

    while(str[i] != '\0')
    {
        strcat[i] = str[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        strcat[i] = str2[j];
        i++,j++;
    }

    strcat[i] = '\0';
    return strcat;
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

    help = StrCatX(Arr,Brr);
    cout<<help;

    return 0;
}
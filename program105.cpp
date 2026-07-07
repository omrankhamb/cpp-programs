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

bool StrCmpX(char *str1,char *str2) //StrCmpX(char *str1 ,char *str2)
{
    int iLength = StrLenX(str1);
    int iLength2 = StrLenX(str2);

    if(iLength != iLength2)
    {
        return false;
    }

    int i = 0 ;

    while (str1[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
        i++;
    }

    return true;
    
}

int main()
{
    int iRet = 0;
    bool bret = false;
    char Arr[20];
    char Brr[20];
    char *help = NULL;

    cout<<"Enter String  : \n";
    IO_string(Arr);

    cout<<"Enter 2nd String : \n";
    IO_string(Brr);

    bret = StrCmpX(Arr,Brr);
    if(bret)
    {
        cout<<"String are equal";
    }
    else
    {
        cout<<"String are not equal";
    }

    return 0;
}
#include<iostream>

namespace Input_string
{
    void IO_string(char *arr)
    {
        scanf("%[^'\n']s",arr);
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



int main()
{
    int iRet = 0;
    char Arr[20];
    cout<<"Enter String  : \n";

    IO_string(Arr);

    iRet = StrLenX(Arr);
    cout<<"Length of string is : "<<iRet;



    return 0;
}
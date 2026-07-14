#include <stdlib.h>

int StrlenX(char *);
int strncmpX(char *, char *);
int strchrX(char *,char);
char *strncatX(char *, char *);
void strncpyX(char *,char *);
void strlwrX(char *);
void struprX(char *);
void strrevX(char *);

int StrlenX(char *Arr)
{
    int i = 0;
    while (Arr[i] != '\0')
    {
        i++;
    }

    return i;
}

char *strncatX(char *str1, char *str2)
{
    int iLength = StrlenX(str1);
    int iLength2 = StrlenX(str2) + iLength;
    int i = 0;
    int j = 0;

    char *str = (char *)malloc(sizeof(char) * (iLength2 + 1));

    while (str[i] != '\0')
    {
        str[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        str[i] = str2[j];
        i++;
        j++;
    }

    str[i] = '\0';

    // Return the address of allocated memory
    return str;
}

int strncmpX(char *str1, char *str2)
{
    int i = 0;
    int iLength = StrlenX(str1);
    int iLength2 = StrlenX(str2);
    int iAns = 1;

    if (iLength2 != iLength)
    {
        return 0;
    }

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            iAns = 0;

            break;
        }
        i++;
    }

    return iAns;
}

void strncpyX(char *str,char **str2)
{
    int iLength = StrlenX(str);
    int i = 0;

    (*str2) = (char*)malloc(sizeof(char)*(iLength + 1));

    while(str[i] != '\0')
    {
        (*str2)[i] = str[i];
        i++;
    }

    (*str2)[i] = '\0';
}


void strlwrX(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i]) <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
}


void struprX(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if((str[i] >= 'A') && (str[i]) <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    
}

void strrevX(char *str)
{
    int right = 0;
    int left = StrlenX(str)-1;

    while (right <= left)
    {
        char ch = str[right];
        str[right] = str[left];
        str[left] = ch;
        right++;
        left--;
    }    
}

int strchrX(char *str,char ch)
{
    int iAns = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iAns = 1;
            break;
        }
        i++;
    }

    return iAns;
}
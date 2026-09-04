#include<iostream>
using namespace std;

int BruteForceStringMatch(char t[],int n, char p[],int m)
{
    for(int i = 0 ; i <= n - m ; i++)
    {
        int j = 0;
        while(j < m && p[j] == t[i+j])
        {
            j +=1;
        }

        if(j == m)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    char ch[] = "123456";
    char c[] = "345";

    int i = BruteForceStringMatch(ch,6,c,3);
    cout<<i;
    return 0;
}
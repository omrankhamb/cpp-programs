// recuriodn

#include<iostream>
using namespace std;
int Fiboncai(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n== 0){
        return 1;
    }
    else 
    {
        return n * Fiboncai(n-1);
    }
}

int main()
{
    int iRet = 0;
    iRet = Fiboncai(5);
    cout<<iRet;
    return 0;
}
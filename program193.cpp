// recuriodn

#include<iostream>
using namespace std;

void TowerOfHani(int n ,char frompos, char topos,char auxpos)
{
    if(n== 1)
    {
        printf("\nMove Disk 1 from peg %c to peg %c",frompos,topos);
        return;
    }

    TowerOfHani(n-1,frompos,auxpos,topos);
    printf("\nMove Disk %d from peg to %c to peg %c",n,frompos,topos);

    TowerOfHani(n-1,auxpos,topos,frompos);
}
int main()
{
    int iRet = 0;
    TowerOfHani(4,'a','b','c');
    cout<<iRet;
    return 0;
}
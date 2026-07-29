#include<iostream>
using namespace std;

// Fibonaci sequence
// 0 1 1 2 3 5
// 0 1 2 3 4 5


void Fibonaci(int first,int second,int iCount,int N)
{
    if(iCount == N)
    {
        return;
    }
    cout<<first<<" ";
    Fibonaci(second,first+second,iCount + 1,N);
}


int main()
{
    int iValue = 0;
    int iRet = 0 ;

    cout<<"Enter A number : ";
    cin>>iValue;

    Fibonaci(0,1,0,iValue);

    
   
    return 0;
}
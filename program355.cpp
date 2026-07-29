#include<iostream>
using namespace std;

// Fibonaci sequence
// 0 1 1 2 3 5
// 0 1 2 3 4 5

int Fibonaci(int n)
{
    if(n== 0 )
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonaci(n-1) + Fibonaci(n-2);
        
    }
}



int main()
{
    int iValue = 0;
    int iRet = 0 ;

    cout<<"Enter A number : ";
    iRet = Fibonaci(4);

    cout<<"Ouput is : "<<iRet;
   
    return 0;
}
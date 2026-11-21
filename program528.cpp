#include<iostream>
using namespace std;


/**
 * 
 *  Base case : 
 *  For the fibonaci series we can say that if n = 0 return 1
 *  code : 
 */

int fib(int n)
{
    if( n == 0 || n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n-2);
}


int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }


    return n * fact(n - 1);
}

void towerOfHanoi(int n , char source , char auxiliary , char target)
{
    if( n == 1)
    {
        cout<<"move 1 disk from the source to target "<<endl;
        return;
    }

    towerOfHanoi(n - 1 , source , target , auxiliary);

    cout<<"move the disk from "<<n<<" " <<source<<" to "<<target<<endl;

    towerOfHanoi(n - 1 , auxiliary , source , target);
}



int main()
{

    towerOfHanoi(3 , 'a' , 'b' , 'c');

    return 0;
}
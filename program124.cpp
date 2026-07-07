#include<iostream>
using namespace std;

/*
    Input : 4
    OUTPIT : 

*/

void display(int iNo)
{
    int i = 0 , j = 0;
    
    for(int i = 1 ; i <= iNo ; i++)
    {
        for(int j = 1 ; j <= iNo ; j++)
        {
            cout<<"*    ";
        }
        cout<<"\n";
    }

}

int main()
{
    int iValue = 0;

    cout<<"Entet The Number Of Elements : ";
    cin>>iValue;

    display(iValue);

    return 0;
}
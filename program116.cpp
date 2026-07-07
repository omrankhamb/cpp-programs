#include<iostream>
using namespace std;

// Input  : 7 
// Output : 1       *       2       *       3       *       4

void display(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1,iCount = 1; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout<<"*\t";
        }
        else
        {
            cout<<iCount<<"\t";
            iCount++;
        }
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